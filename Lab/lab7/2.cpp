#include <iostream>
using namespace std;

void generateFibonacci(int length);

main()
{
    int length;
    cout << "Enter the length of the Fibonacci series: ";
    cin >> length;
    generateFibonacci(length);
}

void generateFibonacci(int length)
{
    int n1 = 0, n2 = 1, next;
    for (int i = 1; i <= length; i++)
    {
        if (i == length)
        {
            cout << n1;
        }
        else
        {
            cout << n1 << ", ";
        }

        next = n1 + n2;
        n1 = n2;
        n2 = next;
    }
}