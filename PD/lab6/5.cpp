#include <iostream>
using namespace std;

float calculateFruitPrice(string fruit, string dayOfWeek, double quantity);

main()
{
    string fruit, dayOfWeek;
    double quantity;
    cout << "Enter the fruit name: ";
    cin >> fruit;
    cout << "Enter the day of the week (e.g., Monday, Sunday): ";
    cin >> dayOfWeek;
    cout << "Enter the quantity: ";
    cin >> quantity;
    if ((dayOfWeek == "Monday" || dayOfWeek == "Tuesday" || dayOfWeek == "Wednesday" || dayOfWeek == "Thursday" || dayOfWeek == "Friday" || dayOfWeek == "Saturday" || dayOfWeek == "Sunday") && (fruit == "banana" || fruit == "apple" || fruit == "orange" || fruit == "grapefruit" || fruit == "kiwi" || fruit == "pineapple" || fruit == "grapes"))
    {
        cout << calculateFruitPrice(fruit, dayOfWeek, quantity);
    }
    else
    {
        cout << "error";
    }
}

float calculateFruitPrice(string fruit, string dayOfWeek, double quantity)
{
    float amount = 0;
    if (dayOfWeek == "Monday" || dayOfWeek == "Tuesday" || dayOfWeek == "Wednesday" || dayOfWeek == "Thursday" || dayOfWeek == "Friday")
    {
        if (fruit == "banana")
        {
            amount = 2.50 * quantity;
        }
        else if (fruit == "apple")
        {
            amount = 1.20 * quantity;
        }
        else if (fruit == "orange")
        {
            amount = 0.85 * quantity;
        }
        else if (fruit == "grapefruit")
        {
            amount = 1.45 * quantity;
        }
        else if (fruit == "kiwi")
        {
            amount = 2.70 * quantity;
        }
        else if (fruit == "pineapple")
        {
            amount = 5.50 * quantity;
        }
        else if (fruit == "grapes")
        {
            amount = 3.85 * quantity;
        }
    }
    else if (dayOfWeek == "Saturday" || dayOfWeek == "Sunday")
    {
        if (fruit == "banana")
        {
            amount = 2.70 * quantity;
        }
        else if (fruit == "apple")
        {
            amount = 1.25 * quantity;
        }
        else if (fruit == "orange")
        {
            amount = 0.90 * quantity;
        }
        else if (fruit == "grapefruit")
        {
            amount = 1.60 * quantity;
        }
        else if (fruit == "kiwi")
        {
            amount = 3.00 * quantity;
        }
        else if (fruit == "pineapple")
        {
            amount = 5.60 * quantity;
        }
        else if (fruit == "grapes")
        {
            amount = 4.20 * quantity;
        }
    }
    return amount;
}