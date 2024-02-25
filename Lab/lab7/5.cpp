#include <iostream>
using namespace std;

int digitSum(int number);

main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Sum of digits: " << digitSum(number);
}

int digitSum(int number)
{
    int sum = 0, n1 = 0;
    while (number > 0)
    {
        n1 = number % 10;
        sum = sum + n1;
        number /= 10;
    }
    return sum;
}