#include <iostream>
using namespace std;

int pileCubes(double volume);

main()
{
    double volume;
    cout << "Enter volume of building: ";
    cin >> volume;

    int result = pileCubes(volume);
    cout << result;
}

int pileCubes(double volume)
{

    double n = 0, m = 0, value = 0;
    while (m < volume)
    {
        value = n * n * n;
        m += value;
        n++;
    }
    if (m == volume)
    {
        return n - 1;
    }
    else
    {
        return -1;
    }
}