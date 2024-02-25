#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int x, int y);
void printmaze();
void moveRight();
void moveLeft();
void pMove(int x, int y);

void moveRight()
{
    int x = 3, y = 4;

    while (true)
    {
        pMove(x, y);
        x += 1;
        if (x == 18)
        {
            moveLeft();
        }
    }
}

void moveLeft()
{
    int x = 18, y = 4;

    while (true)
    {
        pMove(x, y);
        x -= 1;
        if (x == 3)
        {
            moveRight();
        }
    }
}

main()
{
    system("cls");
    printmaze();
    moveRight();
    gotoxy(0, 15);
}

void printmaze()
{

    cout << "********************" << endl;
    cout << "*                  *" << endl;
    cout << "*                  *" << endl;
    cout << "*                  *" << endl;
    cout << "*                  *" << endl;
    cout << "*                  *" << endl;
    cout << "*                  *" << endl;
    cout << "*                  *" << endl;
    cout << "*                  *" << endl;
    cout << "*                  *" << endl;
    cout << "*                  *" << endl;
    cout << "********************" << endl;
}

void pMove(int x, int y)
{
    gotoxy(x, y);
    cout << "P";
    Sleep(200);
    gotoxy(x, y);
    cout << " ";
}

void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}