"use strict";

const API_BASE = "";
const currency = new Intl.NumberFormat("en-US", {
  style: "currency",
  currency: "USD"
});

const elements = {
  accountPage: document.querySelector("#account-page"),
  activeAccountLabel: document.querySelector("#active-account-label"),
  accountDialog: document.querySelector("#account-dialog"),
  accountError: document.querySelector("#account-error"),
  accountForm: document.querySelector("#account-form"),
  accountStatus: document.querySelector("#account-status"),
  accountGreeting: document.querySelector("#account-greeting"),
  actionAmount: document.querySelector("#action-amount"),
  actionForm: document.querySelector("#action-form"),
  actionHint: document.querySelector("#action-hint"),
  actionSubmit: document.querySelector("#action-submit"),
  activityCount: document.querySelector("#activity-count"),
  avatarInitials: document.querySelector("#avatar-initials"),
  brandHome: document.querySelector("#brand-home"),
  closeAccount: document.querySelector("#close-account"),
  closeLoginDialog: document.querySelector("#close-login-dialog"),
  depositTab: document.querySelector("#deposit-tab"),
  heroCarousel: document.querySelector("#hero-carousel"),
  homeCreateAccount: document.querySelector("#home-create-account"),
  homeExistingCustomer: document.querySelector("#home-existing-customer"),
  homePage: document.querySelector("#home-page"),
  loginDialog: document.querySelector("#login-dialog"),
  loginError: document.querySelector("#login-error"),
  loginForm: document.querySelector("#login-form"),
  nextSlide: document.querySelector("#next-slide"),
  openLoginDialog: document.querySelector("#open-login-dialog"),
  openAccountDialog: document.querySelector("#open-account-dialog"),
  pauseSlideshow: document.querySelector("#pause-slideshow"),
  previousSlide: document.querySelector("#previous-slide"),
  profileName: document.querySelector("#profile-name"),
  returnHome: document.querySelector("#return-home"),
  toast: document.querySelector("#toast"),
  totalBalance: document.querySelector("#total-balance"),
  totalDeposits: document.querySelector("#total-deposits"),
  totalWithdrawals: document.querySelector("#total-withdrawals"),
  transactionList: document.querySelector("#transaction-list"),
  withdrawTab: document.querySelector("#withdraw-tab"),
  heroSlides: [...document.querySelectorAll(".hero-slide")],
  carouselDots: [...document.querySelectorAll(".carousel-dot")]
};

let account = null;
let accountIndex = null;
let selectedAction = "deposit";
let toastTimeout;
let activeSlideIndex = 0;
let slideshowTimer;
let slideshowPaused = false;
let carouselHovered = false;
let carouselFocused = false;
const reducedMotion = window.matchMedia("(prefers-reduced-motion: reduce)");

window.history.scrollRestoration = "manual";
window.scrollTo(0, 0);
if (window.location.hash === "#overview" || window.location.hash === "#activity") {
  window.history.replaceState(null, "", `${window.location.pathname}${window.location.search}`);
}

async function apiRequest(path, data) {
  let response;
  try {
    response = await fetch(`${API_BASE}/api/${path}`, data
      ? {
          method: "POST",
          headers: { "Content-Type": "application/x-www-form-urlencoded" },
          body: new URLSearchParams(data)
        }
      : { method: "GET" });
  } catch {
    throw new Error("Cannot reach the C++ server. Start it with run.bat, then reload this page.");
  }

  const responseText = await response.text();
  let result;
  try {
    result = JSON.parse(responseText);
  } catch {
    throw new Error("The C++ server returned an invalid response.");
  }
  if (!response.ok) throw new Error(result.error || "The request could not be completed.");
  return result;
}

function formatMoney(amount) {
  return currency.format(amount);
}

function setActiveAccount(result) {
  accountIndex = result.index;
  account = result.account;
  render();
  elements.homePage.hidden = true;
  elements.accountPage.hidden = false;
  stopSlideshow();
  window.scrollTo(0, 0);
}

function returnToHome() {
  account = null;
  accountIndex = null;
  elements.accountPage.hidden = true;
  elements.homePage.hidden = false;
  elements.loginDialog.close();
  elements.accountDialog.close();
  elements.loginForm.reset();
  elements.accountForm.reset();
  elements.loginError.textContent = "";
  elements.accountError.textContent = "";
  window.scrollTo(0, 0);
  startSlideshow();
}

function showSlide(index) {
  activeSlideIndex = (index + elements.heroSlides.length) % elements.heroSlides.length;
  elements.heroSlides.forEach((slide, slideIndex) => {
    const isActive = slideIndex === activeSlideIndex;
    slide.classList.toggle("active", isActive);
    slide.setAttribute("aria-hidden", String(!isActive));
  });
  elements.carouselDots.forEach((dot, dotIndex) => {
    const isActive = dotIndex === activeSlideIndex;
    dot.classList.toggle("active", isActive);
    if (isActive) {
      dot.setAttribute("aria-current", "true");
    } else {
      dot.removeAttribute("aria-current");
    }
  });
}

function stopSlideshow() {
  window.clearInterval(slideshowTimer);
  slideshowTimer = undefined;
}

function startSlideshow() {
  stopSlideshow();
  if (slideshowPaused || reducedMotion.matches || document.hidden ||
      elements.homePage.hidden || carouselHovered || carouselFocused) return;
  slideshowTimer = window.setInterval(() => {
    showSlide(activeSlideIndex + 1);
  }, 6500);
}

function toggleSlideshow() {
  slideshowPaused = !slideshowPaused;
  elements.pauseSlideshow.textContent = slideshowPaused ? "▶" : "Ⅱ";
  elements.pauseSlideshow.setAttribute("aria-label", slideshowPaused ? "Play slideshow" : "Pause slideshow");
  startSlideshow();
}

function advanceSlide(amount) {
  showSlide(activeSlideIndex + amount);
  startSlideshow();
}

function setAction(action) {
  selectedAction = action;
  const isDeposit = action === "deposit";

  elements.depositTab.classList.toggle("selected", isDeposit);
  elements.withdrawTab.classList.toggle("selected", !isDeposit);
  elements.depositTab.setAttribute("aria-selected", String(isDeposit));
  elements.withdrawTab.setAttribute("aria-selected", String(!isDeposit));
  elements.actionSubmit.innerHTML = isDeposit
    ? 'Deposit funds <span aria-hidden="true">→</span>'
    : 'Withdraw funds <span aria-hidden="true">→</span>';
  elements.actionHint.textContent = isDeposit
    ? "Add funds to your account."
    : "Withdraw from your account.";
}

function render() {
  const transactions = account?.transactions ?? [];
  const deposits = transactions
    .filter((transaction) => transaction.type === "deposit")
    .reduce((total, transaction) => total + transaction.amount, 0);
  const withdrawals = transactions
    .filter((transaction) => transaction.type === "withdraw")
    .reduce((total, transaction) => total + transaction.amount, 0);

  elements.totalBalance.textContent = formatMoney(account?.balance ?? 0);
  elements.totalDeposits.textContent = formatMoney(deposits);
  elements.totalWithdrawals.textContent = formatMoney(withdrawals);
  elements.accountStatus.textContent = account ? "Account active" : "No account selected";
  elements.activeAccountLabel.textContent = account
    ? `${account.name} · Account ${account.id}`
    : "Sign in or create an account";
  elements.accountGreeting.textContent = account ? `${account.name.split(/\s+/)[0]}.` : "there.";
  elements.profileName.textContent = account ? account.name : "Account holder";
  elements.avatarInitials.textContent = account ? account.name.trim().charAt(0).toUpperCase() : "I";
  elements.actionSubmit.disabled = !account;
  elements.activityCount.textContent = `${transactions.length} ${transactions.length === 1 ? "entry" : "entries"}`;
  renderTransactions(transactions);
}

function renderTransactions(transactions) {
  elements.transactionList.replaceChildren();

  if (!account || transactions.length === 0) {
    elements.transactionList.append(
      createEmptyState(
        account ? "Nothing to show just yet" : "Your story starts here",
        account
          ? "Your deposits and withdrawals will appear here."
          : "Sign in or create an account to see your activity."
      )
    );
    return;
  }

  [...transactions].reverse().forEach((transaction) => {
    const row = document.createElement("div");
    row.className = "transaction-row";

    const icon = document.createElement("span");
    icon.className = `transaction-icon ${transaction.type === "deposit" ? "deposit" : "withdraw"}`;
    icon.setAttribute("aria-hidden", "true");
    icon.textContent = transaction.type === "deposit" ? "↘" : "↗";

    const copy = document.createElement("div");
    copy.className = "transaction-copy";
    const title = document.createElement("strong");
    title.textContent = transaction.type === "deposit" ? "Deposit" : "Withdrawal";
    const date = document.createElement("span");
    date.textContent = new Date(transaction.date).toLocaleString([], {
      dateStyle: "medium",
      timeStyle: "short"
    });
    copy.append(title, date);

    const amount = document.createElement("span");
    amount.className = `transaction-amount ${transaction.type === "deposit" ? "deposit" : ""}`;
    amount.textContent = `${transaction.type === "deposit" ? "+" : "−"}${formatMoney(transaction.amount)}`;

    row.append(icon, copy, amount);
    elements.transactionList.append(row);
  });
}

function createEmptyState(titleText, messageText) {
  const emptyState = document.createElement("div");
  emptyState.className = "empty-state";

  const icon = document.createElement("span");
  icon.className = "empty-icon";
  icon.setAttribute("aria-hidden", "true");
  icon.textContent = "✳";

  const title = document.createElement("strong");
  title.textContent = titleText;

  const message = document.createElement("p");
  message.textContent = messageText;

  emptyState.append(icon, title, message);
  return emptyState;
}

function showToast(message, isError = false) {
  window.clearTimeout(toastTimeout);
  elements.toast.textContent = message;
  elements.toast.classList.toggle("error", isError);
  elements.toast.classList.add("visible");
  toastTimeout = window.setTimeout(() => {
    elements.toast.classList.remove("visible");
  }, 3000);
}

function openAccountDialog() {
  elements.accountError.textContent = "";
  elements.accountForm.reset();
  elements.accountDialog.showModal();
  document.querySelector("#account-name").focus();
}

function openLoginDialog() {
  elements.loginError.textContent = "";
  elements.loginForm.reset();
  elements.loginDialog.showModal();
  document.querySelector("#login-name").focus();
}

elements.homeCreateAccount.addEventListener("click", openAccountDialog);
elements.openAccountDialog.addEventListener("click", openAccountDialog);
elements.openLoginDialog.addEventListener("click", openLoginDialog);
elements.homeExistingCustomer.addEventListener("click", openLoginDialog);
elements.closeAccount.addEventListener("click", returnToHome);
elements.returnHome.addEventListener("click", returnToHome);
elements.brandHome.addEventListener("click", (event) => {
  event.preventDefault();
  returnToHome();
});

elements.closeLoginDialog.addEventListener("click", () => {
  elements.loginDialog.close();
});

elements.loginDialog.addEventListener("click", (event) => {
  if (event.target === elements.loginDialog) elements.loginDialog.close();
});

elements.accountDialog.addEventListener("click", (event) => {
  if (event.target === elements.accountDialog) elements.accountDialog.close();
});

elements.loginForm.addEventListener("submit", async (event) => {
  event.preventDefault();
  const formData = new FormData(elements.loginForm);
  const name = String(formData.get("name") ?? "").trim();
  const id = String(formData.get("id") ?? "").trim();
  const submitButton = elements.loginForm.querySelector("button[type='submit']");

  submitButton.disabled = true;
  try {
    const result = await apiRequest("login", { name, id });
    elements.loginDialog.close();
    setActiveAccount(result);
  } catch (error) {
    elements.loginError.textContent = error.message;
  } finally {
    submitButton.disabled = false;
  }
});

elements.accountForm.addEventListener("submit", async (event) => {
  event.preventDefault();
  const formData = new FormData(elements.accountForm);
  const name = String(formData.get("name") ?? "").trim();
  const id = String(formData.get("id") ?? "").trim();
  const openingBalance = Number(formData.get("balance"));

  if (!name || !/^\d+$/.test(id) || Number(id) < 1 || !Number.isSafeInteger(Number(id)) ||
      !Number.isFinite(openingBalance) || openingBalance < 0) {
    elements.accountError.textContent = "Enter a name, a valid account number, and a non-negative opening balance.";
    return;
  }

  const submitButton = elements.accountForm.querySelector("button[type='submit']");
  submitButton.disabled = true;
  try {
    const result = await apiRequest("accounts", { name, id, balance: openingBalance });
    elements.accountDialog.close();
    setActiveAccount(result);
    showToast(`Account created for ${name}.`);
  } catch (error) {
    elements.accountError.textContent = error.message;
  } finally {
    submitButton.disabled = false;
  }
});

elements.depositTab.addEventListener("click", () => setAction("deposit"));
elements.withdrawTab.addEventListener("click", () => setAction("withdraw"));
elements.previousSlide.addEventListener("click", () => advanceSlide(-1));
elements.nextSlide.addEventListener("click", () => advanceSlide(1));
elements.pauseSlideshow.addEventListener("click", toggleSlideshow);
elements.carouselDots.forEach((dot, index) => {
  dot.addEventListener("click", () => {
    showSlide(index);
    startSlideshow();
  });
});
elements.heroCarousel.addEventListener("mouseenter", () => {
  carouselHovered = true;
  stopSlideshow();
});
elements.heroCarousel.addEventListener("mouseleave", () => {
  carouselHovered = false;
  startSlideshow();
});
elements.heroCarousel.addEventListener("focusin", () => {
  carouselFocused = true;
  stopSlideshow();
});
elements.heroCarousel.addEventListener("focusout", (event) => {
  if (!elements.heroCarousel.contains(event.relatedTarget)) {
    carouselFocused = false;
    startSlideshow();
  }
});
document.addEventListener("visibilitychange", startSlideshow);
reducedMotion.addEventListener("change", startSlideshow);

elements.actionAmount.addEventListener("input", () => {
  elements.actionSubmit.disabled = !account || Number(elements.actionAmount.value) <= 0;
});

elements.actionForm.addEventListener("submit", async (event) => {
  event.preventDefault();
  const amount = Number(elements.actionAmount.value);

  if (!account) {
    showToast("Sign in or create an account before moving money.", true);
    return;
  }
  if (!Number.isFinite(amount) || amount <= 0) {
    showToast("Enter an amount greater than zero.", true);
    return;
  }

  elements.actionSubmit.disabled = true;
  try {
    const result = await apiRequest(selectedAction, { index: accountIndex, amount });
    setActiveAccount(result);
    elements.actionForm.reset();
    showToast(selectedAction === "deposit" ? "Deposit completed successfully." : "Withdrawal completed successfully.");
  } catch (error) {
    showToast(error.message, true);
  } finally {
    elements.actionSubmit.disabled = !account;
  }
});

elements.actionSubmit.disabled = true;
render();
showSlide(activeSlideIndex);
startSlideshow();
