#include <iostream>
using namespace std;

int calculatePrice(int money, int year);

main()
{
    int money, year;
    cout << "Enter Money: ";
    cin >> money;
    cout << "Enter Year: ";
    cin >> year;
    int totalSpend = calculatePrice(money, year);
    if (totalSpend < money)
    {
        money -= totalSpend;
        cout << "Yes! He will live a carefree life and will have " << money << " dollars left.";
    }
    else if (totalSpend > money)
    {
        totalSpend -= money;
        cout << "He will need " << totalSpend << " dollars to survive.";
    }
}

int calculatePrice(int money, int year)
{
    int oddYear = 0, evenYear = 0, age = 18;
    for (int i = 1800; i <= year; i++)
    {
        if (i % 2 == 0)
        {
            evenYear += 12000;
        }
        if (i % 2 == 1)
        {
            oddYear += 12000 + 50 * age;
        }
        age++;
    }
    int total = oddYear + evenYear;
    return total;
}