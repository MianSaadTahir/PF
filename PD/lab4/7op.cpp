#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int x, int y);
void printmaze();
void moveUp();
void moveDown();
void pMove(int x, int y);

void moveUp()
{
    int x = 3, y = 9;

    while (true)
    {
        pMove(x, y);
        y -= 1;
        if (y == 1)
        {
            // y = 9;
            moveDown();
        }
    }
}

void moveDown()
{
    int x = 3, y = 1;

    while (true)
    {
        pMove(x, y);
        y += 1;
        if (y == 9)
        {
            // y = 1;
            moveUp();
        }
    }
}

main()
{
    system("cls");
    printmaze();
    moveDown();
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