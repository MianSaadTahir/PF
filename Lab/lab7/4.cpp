#include <iostream>
using namespace std;

int frequencyChecker(int number, int digit);

main()
{
    int number, digit;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Enter the digit to check: ";
    cin >> digit;
    cout << "Frequency: " << frequencyChecker(number, digit);
}

int frequencyChecker(int number, int digit)
{
    int frequency = 0, n1 = 0, n2 = 1;
    while (n2 > 0)
    {
        n1 = number % 10;
        n2 = number / 10;

        if (n1 == digit)
        {
            frequency++;
        }
        number = n2;
    }
    return frequency;
}