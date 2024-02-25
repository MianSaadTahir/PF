#include <iostream>
using namespace std;

bool greaterNumber(int x, int y);

main()
{
    int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << greaterNumber(num1, num2);
}

bool greaterNumber(int x, int y)
{
    if (x > y)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}