#include <iostream>
using namespace std;

bool isPrime(int number);

int main()
{
    int number;
    cout << "Enter Number: ";
    cin >> number;
    cout << isPrime(number);
}

bool isPrime(int number)
{
    int count = 0, result = 0;
    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        result = 1;
    }
    return result;
}