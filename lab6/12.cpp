#include <iostream>
using namespace std;

float totalIncome(string category, int rows, int columns);

main()
{
    string category;
    int rows, columns;
    cout << "Enter the screening type (Premiere/Normal/Discount): ";
    cin >> category;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> columns;
    cout << totalIncome(category, rows, columns);
}
float totalIncome(string category, int rows, int columns)
{
    float price = 0;
    if (category == "Premiere")
    {
        price = rows * columns * 12.00;
    }
    if (category == "Normal")
    {
        price = rows * columns * 7.50;
    }
    if (category == "Discount")
    {
        price = rows * columns * 5.00;
    }
    return price;
}
