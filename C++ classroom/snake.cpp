#include <conio.h>
#include <windows.h>

#include <cstdlib>
#include <ctime>
#include <deque>
#include <iostream>

using namespace std;

const int boardWidth = 30;
const int boardHeight = 16;

struct Point
{
  int x;
  int y;
};

bool samePoint(Point first, Point second)
{
  return first.x == second.x && first.y == second.y;
}

Point makeFood(const deque<Point> &snake)
{
  Point food;
  bool onSnake;

  do
  {
    food = {rand() % boardWidth, rand() % boardHeight};
    onSnake = false;
    for (Point segment : snake)
    {
      if (samePoint(food, segment))
      {
        onSnake = true;
        break;
      }
    }
  } while (onSnake);

  return food;
}

void drawBoard(const deque<Point> &snake, Point food, int score)
{
  COORD topLeft = {0, 0};
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), topLeft);

  cout << '+';
  for (int x = 0; x < boardWidth; ++x)
  {
    cout << '-';
  }
  cout << "+\n";

  for (int y = 0; y < boardHeight; ++y)
  {
    cout << '|';
    for (int x = 0; x < boardWidth; ++x)
    {
      Point current = {x, y};
      char symbol = ' ';

      if (samePoint(current, snake.front()))
      {
        symbol = 'O';
      }
      else
      {
        for (size_t i = 1; i < snake.size(); ++i)
        {
          if (samePoint(current, snake[i]))
          {
            symbol = 'o';
            break;
          }
        }
      }

      if (samePoint(current, food))
      {
        symbol = '*';
      }

      cout << symbol;
    }
    cout << "|\n";
  }

  cout << '+';
  for (int x = 0; x < boardWidth; ++x)
  {
    cout << '-';
  }
  cout << "+\nScore: " << score << "   Move: WASD / Arrow keys   Quit: Q\n";
  cout.flush();
}

int main()
{
  srand(static_cast<unsigned int>(time(nullptr)));

  deque<Point> snake = {{boardWidth / 2, boardHeight / 2},
                        {boardWidth / 2 - 1, boardHeight / 2},
                        {boardWidth / 2 - 2, boardHeight / 2}};
  Point food = makeFood(snake);
  int direction = 1; // 0 = up, 1 = right, 2 = down, 3 = left
  int score = 0;
  bool gameOver = false;

  system("cls");
  CONSOLE_CURSOR_INFO cursorInfo;
  GetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
  cursorInfo.bVisible = FALSE;
  SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);

  while (!gameOver)
  {
    if (_kbhit())
    {
      int key = _getch();
      if (key == 0 || key == 224)
      {
        key = _getch();
        if (key == 72)
          key = 'w';
        else if (key == 77)
          key = 'd';
        else if (key == 80)
          key = 's';
        else if (key == 75)
          key = 'a';
      }

      if ((key == 'w' || key == 'W') && direction != 2)
        direction = 0;
      else if ((key == 'd' || key == 'D') && direction != 3)
        direction = 1;
      else if ((key == 's' || key == 'S') && direction != 0)
        direction = 2;
      else if ((key == 'a' || key == 'A') && direction != 1)
        direction = 3;
      else if (key == 'q' || key == 'Q')
        gameOver = true;
    }

    if (gameOver)
    {
      break;
    }

    Point head = snake.front();
    if (direction == 0)
      --head.y;
    else if (direction == 1)
      ++head.x;
    else if (direction == 2)
      ++head.y;
    else
      --head.x;

    bool ateFood = samePoint(head, food);
    if (head.x < 0 || head.x >= boardWidth || head.y < 0 || head.y >= boardHeight)
    {
      gameOver = true;
    }

    size_t segmentsToCheck = snake.size() - (ateFood ? 0 : 1);
    for (size_t i = 0; i < segmentsToCheck && !gameOver; ++i)
    {
      if (samePoint(head, snake[i]))
      {
        gameOver = true;
      }
    }

    if (!gameOver)
    {
      snake.push_front(head);
      if (ateFood)
      {
        ++score;
        food = makeFood(snake);
      }
      else
      {
        snake.pop_back();
      }

      drawBoard(snake, food, score);
      Sleep(120);
    }
  }

  COORD messagePosition = {0, static_cast<SHORT>(boardHeight + 3)};
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), messagePosition);
  cout << "Game over! Final score: " << score << "\n";

  cursorInfo.bVisible = TRUE;
  SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
  return 0;
}