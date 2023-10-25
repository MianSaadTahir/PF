#include <iostream>
using namespace std;

int primeNumbers(int range);
bool isPrime(int i);

main()
{
    int range;
    cout << "Enter the range: ";
    cin >> range;
    int result = primeNumbers(range);
    cout << result;
}

int primeNumbers(int range)
{
    int prime = 0;
    for (int i = 1; i <= range; i++)
    {
        if (isPrime(i))
        {
            prime++;
        }
    }
    return prime;
}
bool isPrime(int i)
{
    int count = 0;
    for (int x = 1; x <= i; x++)
    {
        if (i % x == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        return true;
    }
    else
    {
        return false;
    }
}