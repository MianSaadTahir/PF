#include <iostream>
using namespace std;
string price(string category, int people, float budget);
main()
{
    float budget;
    int people;
    string category;
    cout << "Enter the budget: ";
    cin >> budget;
    cout << "Enter the category (VIP/Normal): ";
    cin >> category;
    cout << "Enter the number of people in the group: ";
    cin >> people;
    cout << price(category, people, budget);
}
string price(string category, int people, float budget)
{
    string result;
    float transport = 0, moneyLeft = 0, ticket = 0, totalCost = 0;
    if (people <= 4)
    {
        transport = budget * 0.75;
    }
    if (people >= 5 && people <= 9)
    {
        transport = budget * 0.60;
    }
    if (people >= 10 && people <= 24)
    {
        transport = budget * 0.50;
    }
    if (people >= 25 && people <= 49)
    {
        transport = budget * 0.40;
    }
    if (people >= 50)
    {
        transport = budget * 0.25;
    }

    if (category == "Normal")
    {
        ticket = 249.99;
    }
    if (category == "VIP")
    {
        ticket = 499.99;
    }
    totalCost = ticket * people;
    moneyLeft = totalCost + transport;
    if (moneyLeft > budget)
    {
        moneyLeft = moneyLeft - budget;
        result = "Not enough money! You need " + to_string(moneyLeft) + " leva.";
    }
    else
    {
        moneyLeft = budget - moneyLeft;
        result = "Yes! You have " + to_string(moneyLeft) + " leva left.";
    }
    return result;
}