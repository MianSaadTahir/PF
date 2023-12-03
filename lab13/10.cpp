#include <iostream>
using namespace std;

void displayWorld(char galaxy[][5], int rowSize);
void setGravityStatus(bool status, bool gravity);
void timeTick(char galaxy[][5], int time);

main()
{
    int time = 0;
    int rowSize = 5;
    int colSize = 5;
    cout << "Enter time tick: ";
    cin >> time;
    char galaxy[5][5] = {
        {'-', '#', '#', '-', '#'},
        {'#', '-', '-', '#', '-'},
        {'-', '#', '-', '-', '-'},
        {'#', '-', '#', '-', '#'},
        {'#', '-', '-', '-', '-'}};

    bool gravity = false;

    cout << "World before tick: " << endl;
    displayWorld(galaxy, rowSize);
    setGravityStatus(true, gravity);
    timeTick(galaxy, time);
    cout << endl;

    cout << "World After Tick: " << endl;
    displayWorld(galaxy, rowSize);
}

void displayWorld(char galaxy[][5], int rowSize)
{

    for (int row = 0; row < rowSize; row++)
    {
        for (int col = 0; col < 5; col++)
        {
            cout << galaxy[row][col] << "\t";
        }
        cout << endl;
    }
}

void setGravityStatus(bool status, bool gravity)
{
    gravity = status;
}

void timeTick(char galaxy[][5], int time)
{
    for (int count = 0; count < time; count++)
    {
        for (int row = 4; row > 0; row--)
        {
            for (int col = 0; col < 5; col++)
            {
                if (galaxy[row][col] == '-' && galaxy[row - 1][col] == '#')
                {
                    galaxy[row][col] = '#';
                    galaxy[row - 1][col] = '-';
                }
            }
        }
    }
}