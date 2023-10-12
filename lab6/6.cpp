#include <iostream>
using namespace std;

float discount(float amount, string day, string month);

main()
{
    float amount;
    string day, month;
    cout << "Enter Purchase Day: ";
    cin >> day;
    cout << "Enter Purchase Month: ";
    cin >> month;
    cout << "Enter Purchase Amount: ";
    cin >> amount;
    float result = discount(amount, day, month);
    cout << "Payable Amount after discount: " << result;
}
float discount(float amount, string day, string month)
{
    float result = amount;
    if (day == "Sunday")
    {
        if (month == "October")
        {
            result = amount - (amount * 0.1);

            return result;
        }
        result = amount - (amount * 0.05);
        return result;
    }
    return result;
}
