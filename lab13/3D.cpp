#include <iostream>
using namespace std;

void printCars(int cars[][5], string color);

main()
{
    string color;
    cout << "Enter color: ";
    cin >> color;
    int cars[5][5] = {{10, 7, 12, 10, 4},
                      {18, 11, 15, 17, 2},
                      {23, 19, 12, 16, 14},
                      {7, 12, 16, 0, 2},
                      {3, 5, 6, 2, 1}};
    printCars(cars, color);
}

void printCars(int cars[][5], string color)
{
    if (color == "red")
    {
        for (int rows = 0; rows < 5; rows++)
        {
            cout << cars[rows][0];
            cout << endl;
        }
    }
    else if (color == "black")
    {
        for (int rows = 0; rows < 5; rows++)
        {
            cout << cars[rows][1];
            cout << endl;
        }
    }
    else if (color == "brown")
    {
        for (int rows = 0; rows < 5; rows++)
        {
            cout << cars[rows][2];
            cout << endl;
        }
    }
    else if (color == "blue")
    {
        for (int rows = 0; rows < 5; rows++)
        {
            cout << cars[rows][3];
            cout << endl;
        }
    }
    else if (color == "gray")
    {
        for (int rows = 0; rows < 5; rows++)
        {
            cout << cars[rows][4];
            cout << endl;
        }
    }
    else
    {
        cout << "invalid color!";
    }
}