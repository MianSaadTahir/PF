#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int x, int y);
void menu(int x, int y);
void box(int a, int b);
void printEnemy1();
void eraseEnemy1();
void moveEnemy1(string dir1);
string changeDirectionEnemy1(string dir1);

void printEnemy2();
void eraseEnemy2();
void moveEnemy2(string dir2);
string changeDirectionEnemy2(string dir2);

void printEnemy3();
void eraseEnemy3();
void moveEnemy3(string dir3);
string changeDirectionEnemy3(string dir3);

void printPlayer();
void erasePlayer();
void movePleft();
void movePright();
void movePup();
void movePdown();

char getCharAtxy(short int x, short int y);

int sX = 51, sY = 27;
int score = 0;
int e1X = 32, e1Y = 11;
int e2X = 40, e2Y = 11;
int e3X = 68, e3Y = 16;
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
        string dir1 = "down", dir2 = "right", dir3 = "diagUp";
        int a = 31, b = 10;
        box(a, b);
        printPlayer();
        while (true)
        {
            gotoxy(sX, sY);
            cout << "Score: " << score;
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
            moveEnemy1(dir1);
            dir1 = changeDirectionEnemy1(dir1);
            Sleep(60);

            moveEnemy2(dir2);
            dir2 = changeDirectionEnemy2(dir2);
            Sleep(20);

            moveEnemy3(dir3);
            dir3 = changeDirectionEnemy3(dir3);
            Sleep(20);
        }
    }
}

string changeDirectionEnemy1(string dir1)
{
    if (e1Y + 4 == 18)
    {
        dir1 = "up";
    }
    if (e1Y == 11)
    {
        dir1 = "down";
    }
    return dir1;
}
string changeDirectionEnemy2(string dir2)
{
    if (e2X + 4 == 58)
    {
        dir2 = "left";
    }
    if (e2X == 40)
    {
        dir2 = "right";
    }
    return dir2;
}
string changeDirectionEnemy3(string dir3)
{
    if (e3X == 73 && e3Y == 11)
    {
        dir3 = "diagDown";
    }
    if (e3X == 68 && e3Y == 16)
    {
        dir3 = "diagUp";
    }
    return dir3;
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
    cout << "|/ \\|";
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
    cout << "     ";
}

void movePleft()
{
    if ((getCharAtxy(pX - 1, pY) == ' ' || getCharAtxy(pX - 1, pY + 1) == ' ' || getCharAtxy(pX - 1, pY + 2) == ' ' || getCharAtxy(pX - 1, pY + 3) == ' ') || (getCharAtxy(pX - 1, pY) == '0' || getCharAtxy(pX - 1, pY + 1) == '0' || getCharAtxy(pX - 1, pY + 2) == '0' || getCharAtxy(pX - 1, pY + 3) == '0'))
    {
        erasePlayer();
        if (getCharAtxy(pX - 1, pY) == '0' || getCharAtxy(pX - 1, pY + 1) == '0' || getCharAtxy(pX - 1, pY + 2) == '0' || getCharAtxy(pX - 1, pY + 3) == '0')
        {
            score = score + 1;
        }

        pX = pX - 1;
        printPlayer();
    }
}
void movePright()
{
    if ((getCharAtxy(pX + 7, pY) == ' ' || getCharAtxy(pX + 7, pY + 1) == ' ' || getCharAtxy(pX + 7, pY + 2) == ' ' || getCharAtxy(pX + 7, pY + 3) == ' ') || (getCharAtxy(pX + 7, pY) == '0' || getCharAtxy(pX + 7, pY + 1) == '0' || getCharAtxy(pX + 7, pY + 2) == '0' || getCharAtxy(pX + 7, pY + 3) == '0'))
    {
        erasePlayer();
        if (getCharAtxy(pX + 4, pY) == '0' || getCharAtxy(pX + 7, pY + 1) == '0' || getCharAtxy(pX + 6, pY + 2) == '0' || getCharAtxy(pX + 5, pY + 3) == '0')
        {
            score = score + 1;
        }

        pX = pX + 1;
        printPlayer();
    }
}
void movePup()
{
    if (getCharAtxy(pX + 7, pY - 8) == ' ' || getCharAtxy(pX + 7, pY - 8) == '0')
    {
        erasePlayer();
        pY = pY - 1;
        printPlayer();
    }
}
void movePdown()
{
    if (getCharAtxy(pX + 5, pY + 4) == ' ')
    {
        erasePlayer();
        pY = pY + 1;
        printPlayer();
    }
}

void moveEnemy1(string dir1)
{
    eraseEnemy1();
    if (dir1 == "down")
    {
        e1Y += 1;
    }

    if (dir1 == "up")
    {
        e1Y -= 1;
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
    cout << " \\_/ ";
    gotoxy(e2X, e2Y + 2);
    cout << "  |  ";
}
void eraseEnemy2()
{
    gotoxy(e2X, e2Y);
    cout << "     ";
    gotoxy(e2X, e2Y + 1);
    cout << "     ";
    gotoxy(e2X, e2Y + 2);
    cout << "     ";
}
void moveEnemy2(string dir2)
{
    eraseEnemy2();
    if (dir2 == "right")
    {
        e2X += 1;
    }
    if (dir2 == "left")
    {
        e2X -= 1;
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
void moveEnemy3(string dir3)
{
    eraseEnemy3();
    if (dir3 == "diagUp")
    {
        e3X += 1;
        e3Y -= 1;
    }
    if (dir3 == "diagDown")
    {
        e3X -= 1;
        e3Y += 1;
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
    cout << "|           0                                    |";
    gotoxy(a, b += 1);
    cout << "|                                                |";
    gotoxy(a, b += 1);
    cout << "|                            0                   |";
    gotoxy(a, b += 1);
    cout << "|               0                                |";
    gotoxy(a, b += 1);
    cout << "|________________________________________________|";
}