#include <iostream>
using namespace std;

float lowestPrice(int distance, string period);

main()
{
    string period;
    int distance;
    cout << "Enter the number of kilometers: ";
    cin >> distance;
    cout << "Enter the period of the day (day/night): ";
    cin >> period;
    cout << "Lowest price for " << distance << " kilometers: " << lowestPrice(distance, period) << " EUR";
}

float lowestPrice(int distance, string period)
{
    float rate = 0;
    if (distance <= 20 && period == "day")
    {
        rate = 0.70 + (0.79 * distance);
    }
    if (distance <= 20 && period == "night")
    {
        rate = 0.70 + (0.90 * distance);
    }
    if (distance > 20 && distance <= 100)
    {
        rate = 0.09 * distance;
    }
    if (distance > 100)
    {
        rate = 0.06 * distance;
    }
    return rate;
}