#include <iostream>
using namespace std;

void printCars(int cars[][5]);

main()
{
    int cars[5][5] = {{10, 7, 12, 10, 4}, {18, 11, 15, 17, 2}, {23, 19, 12, 16, 14}, {7, 12, 16, 0, 2}, {3, 5, 6, 2, 1}};
    printCars(cars);
}

void printCars(int cars[][5])
{
    for (int column = 0; column < 5; column++)
    {
        cout << cars[2][column];
        cout << endl;
    }
}