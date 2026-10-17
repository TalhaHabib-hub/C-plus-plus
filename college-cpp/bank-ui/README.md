# Islamic Bank C++ banking UI

The browser UI uses the account class and deposit/withdraw methods from
`../CustomExceptionClasses.cpp`. The C++ server serves the welcome page and
keeps accounts and transactions in memory while it is running. Customers can
create an account, then sign in with the same name and account number. Returning
home signs out without deleting the account.

The home-page carousel uses three local crops of an Unsplash mosque and
congregation photograph (`photo-1564769625905-50e93615e769`). The slideshow
auto-advances and includes previous/next, slide selection, and pause controls.

## Run on Windows

1. Make sure MinGW `g++` is installed and available on `PATH`.
2. Double-click `run.bat`.
3. Open [http://127.0.0.1:8080](http://127.0.0.1:8080) in your browser.
4. Close the server window when you are finished.

The server listens only on `127.0.0.1`. Account data is held in server memory
and is cleared when the server stops. Account numbers must be unique. This is
a learning demo, not a production banking service.
