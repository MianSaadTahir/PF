#include <iostream>
using namespace std;

int primorial(int range);
bool isPrime(int val);

main()
{
    int range;
    cout << "Enter Number: ";
    cin >> range;
    int result = primorial(range);
    cout << result;
}

int primorial(int range)
{
    int product = 1, counter = 0, val = 2;
    while (counter != range)
    {
        if (isPrime(val))
        {
            product *= val;
            counter++;
        }
        val++;
    }
    return product;
}

bool isPrime(int val)
{
    int count = 0;
    for (int x = 1; x <= val; x++)
    {
        if (val % x == 0)
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