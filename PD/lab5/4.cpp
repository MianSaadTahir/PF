#include <iostream>
using namespace std;

string projectTimeCalculation(int neededHours, int days, int workers);

main()
{
    int neededHours, days, workers;
    cout << "Enter the needed hours: ";
    cin >> neededHours;
    cout << "Enter the days that the firm has: ";
    cin >> days;
    cout << "Enter the number of all workers: ";
    cin >> workers;
    string result = projectTimeCalculation(neededHours, days, workers);
    cout << result;
}

string projectTimeCalculation(int neededHours, int days, int workers)
{
    int workingHours = days * 9 * workers;
    int remainHours = neededHours - workingHours;

    if (remainHours > 0)
    {
        return "Not enough time! " + to_string(remainHours) + " hours needed.";
    }
    if (remainHours < 0)
    {
        return "Yes!" + to_string(-1 * remainHours) + " hours left.";
    }
}