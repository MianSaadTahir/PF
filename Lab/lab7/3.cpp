#include <iostream>
using namespace std;

int totalDigits(int number);

main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Total number of digits: " << totalDigits(number);
}

int totalDigits(int number)
{
    int count = 0;

    if (number == 0)
    {
        count = 1;
    }
    while (number > 0)
    {

        count = count + 1;
        number = number / 10;
    }
    return (count);
}