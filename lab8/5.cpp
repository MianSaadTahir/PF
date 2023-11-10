#include <iostream>
using namespace std;

string howBad(int number);

main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    string result = howBad(number);
    cout << result;
}

string howBad(int number)
{
    string status;
    int prime = 0, remain = 0, binary = 0;

    while (number > 0)
    {
        binary += (number % 2);
        number /= 2;
    }
    for (int i = 1; i <= binary; i++)
    {
        if (binary % i == 0)
        {
            prime++;
        }
    }
    if (binary % 2 == 0)
    {
        status = "Evil";
    }
    else
    {
        status = "Odious";
    }
    if (prime == 2)
    {
        status += ", Pernicious";
    }
    return status;
}
