#include <iostream>
using namespace std;

void longestTime ( int hr, int min );

main()
{
    int hr, min;

    cout << "Enter the number of hours: ";
    cin >> hr;
    cout << "Enter the number of minutes: ";
    cin >> min;
    longestTime ( hr, min );
}

void longestTime ( int hr, int min )
{
    int hours;
    hours = hr * 60;

    if ( hours > min)
    {
        cout << hr;
    }
    else
    {
        cout << min;
    }
}