#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int x, int y);
void menu(int x, int y);
void box(int a, int b);
void printEnemy1();
void eraseEnemy1();
void moveEnemy1();
void printEnemy2();
void eraseEnemy2();
void moveEnemy2();
void printEnemy3();
void eraseEnemy3();
void moveEnemy3();
void printPlayer();
void erasePlayer();
void movePleft();
void movePright();
void movePup();
void movePdown();
char getCharAtxy(short int x, short int y);

int e1X = 32, e1Y = 11;
int e2X = 40, e2Y = 11;
int e3X = 70, e3Y = 16;
int pX = 32, pY = 21;
main()
{
    system("cls");
    int x = 40, y = 3;
    int option;
    menu(x, y);
    gotoxy(49, 12);
    system("color 06");
    cout << "1. Start Game" << endl;
    gotoxy(49, 13);
    cout << "2. Exit" << endl;
    gotoxy(49, 15);
    cout << "Press 1 or 2: ";
    cin >> option;
    if (option == 1)
    {
        int a = 31, b = 10;
        box(a, b);
        printPlayer();
        while (true)
        {
            if (GetAsyncKeyState(VK_LEFT))
            {
                movePleft();
            }
            if (GetAsyncKeyState(VK_UP))
            {
                movePup();
            }
            if (GetAsyncKeyState(VK_DOWN))
            {
                movePdown();
            }
            if (GetAsyncKeyState(VK_RIGHT))
            {
                movePright();
            }
            moveEnemy1();
            Sleep(400);
            moveEnemy2();
            Sleep(1);
            moveEnemy3();
            Sleep(1);
        }
    }
}

void printPlayer()
{
    gotoxy(pX, pY);
    cout << " ___";
    gotoxy(pX, pY + 1);
    cout << "(~ ~)_/";
    gotoxy(pX, pY + 2);
    cout << "|___|/";
    gotoxy(pX, pY + 3);
    cout << " / \\";
}
void erasePlayer()
{
    gotoxy(pX, pY);
    cout << "    ";
    gotoxy(pX, pY + 1);
    cout << "       ";
    gotoxy(pX, pY + 2);
    cout << "      ";
    gotoxy(pX, pY + 3);
    cout << "    ";
}
void movePleft()
{
    if (getCharAtxy(pX - 1, pY) == ' ')
    {
        erasePlayer();
        pX = pX - 1;
        printPlayer();
    }
}
void movePright()
{
    if (getCharAtxy(pX + 7, pY) == ' ')
    {
        erasePlayer();
        pX = pX + 1;
        printPlayer();
    }
}

void moveEnemy1()
{
    eraseEnemy1();
    e1Y += 1;
    if (e1Y == 18)
    {
        e1Y = 11;
    }
    printEnemy1();
}
void printEnemy1()
{
    gotoxy(e1X, e1Y);
    cout << "<||>";
    gotoxy(e1X, e1Y + 1);
    cout << "(__)";
    gotoxy(e1X, e1Y + 2);
    cout << " \\/";
}
void eraseEnemy1()
{
    gotoxy(e1X, e1Y);
    cout << "    ";
    gotoxy(e1X, e1Y + 1);
    cout << "    ";
    gotoxy(e1X, e1Y + 2);
    cout << "    ";
}

void printEnemy2()
{
    gotoxy(e2X, e2Y);
    cout << "[@_@]";
    gotoxy(e2X, e2Y + 1);
    cout << " \\_/";
    gotoxy(e2X, e2Y + 2);
    cout << "  |";
}
void eraseEnemy2()
{
    gotoxy(e2X, e2Y);
    cout << "     ";
    gotoxy(e2X, e2Y + 1);
    cout << "    ";
    gotoxy(e2X, e2Y + 2);
    cout << "   ";
}
void moveEnemy2()
{
    eraseEnemy2();
    e2X += 1;
    if (e2X == 55)
    {
        e2X = 40;
    }
    printEnemy2();
}

void printEnemy3()
{
    gotoxy(e3X, e3Y);
    cout << "^o__o^";
    gotoxy(e3X, e3Y + 1);
    cout << "  \\/";
}
void eraseEnemy3()
{
    gotoxy(e3X, e3Y);
    cout << "      ";
    gotoxy(e3X, e3Y + 1);
    cout << "     ";
}
void moveEnemy3()
{
    eraseEnemy3();
    e3X += 1;
    e3Y -= 1;
    if (e3X == 75 && e3Y == 11)
    {
        e3X = 70;
        e3Y = 16;
    }
    printEnemy3();
}

void menu(int x, int y)
{
    gotoxy(x, y);
    cout << "    ======           ++++++";
    gotoxy(x, y += 1);
    cout << "  ===               ++";
    gotoxy(x, y += 1);
    cout << " ==                ++";
    gotoxy(x, y += 1);
    cout << "=     ONTRA         ++    HOOTER";
    gotoxy(x, y += 1);
    cout << " ==                   ++";
    gotoxy(x, y += 1);
    cout << "  ===                   ++";
    gotoxy(x, y += 1);
    cout << "    ======        +++++++";
}
void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
char getCharAtxy(short int x, short int y)
{
    CHAR_INFO ci;
    COORD xy = {0, 0};
    SMALL_RECT rect = {x, y, x, y};
    COORD coordBufSize;
    coordBufSize.X = 1;
    coordBufSize.Y = 1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar : ' ';
}
void box(int a, int b)
{
    gotoxy(a, b);
    cout << "__________________________________________________";
    gotoxy(a, b += 1);
    cout << "|                                                |";
    gotoxy(a, b += 1);
    cout << "|                                                |";
    gotoxy(a, b += 1);
    cout << "|                                                |";
    gotoxy(a, b += 1);
    cout << "|                                                |";
    gotoxy(a, b += 1);
    cout << "|                                                |";
    gotoxy(a, b += 1);
    cout << "|                                                |";
    gotoxy(a, b += 1);
    cout << "|                                                |";
    gotoxy(a, b += 1);
    cout << "|                                                |";
    gotoxy(a, b += 1);
    cout << "|                                                |";
    gotoxy(a, b += 1);
    cout << "|                                                |";
    gotoxy(a, b += 1);
    cout << "|                                                |";
    gotoxy(a, b += 1);
    cout << "|                                                |";
    gotoxy(a, b += 1);
    cout << "|                                                |";
    gotoxy(a, b += 1);
    cout << "|                                                |";
    gotoxy(a, b += 1);
    cout << "|________________________________________________|";
}