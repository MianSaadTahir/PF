#include <iostream>
#include <conio.h>
using namespace std;

float callPrice(char service, char time, int minutes);

main()
{
    char service, time;
    int minutes;
    cout << "Enter the service code (R/r for regular, P/p for premium): ";
    cin >> service;
    if (service == 'R' || service == 'r')
    {
        cout << "Enter the number of minutes used: ";
        cin >> minutes;
        cout << "Service Type: Regular" << endl;
        cout << "Total Minutes Used: " << minutes << " minutes" << endl;
        cout << "Amount Due: $" << callPrice(service, time, minutes);
    }

    else if (service == 'P' || service == 'p')
    {
        cout << "Enter time of the call (D/d for day, N/n for night): ";
        cin >> time;
        if (time == 'D' || time == 'd' || time == 'N' || time == 'n')
        {
            cout << "Enter the number of minutes used: ";
            cin >> minutes;
            cout << "Service Type: Premium" << endl;
            cout << "Total Minutes Used: " << minutes << " minutes" << endl;
            cout << "Amount Due: $" << callPrice(service, time, minutes);
        }
    }
    else
    {
        cout << "Invalid Character...";
    }
}

float callPrice(char service, char time, int minutes)
{
    float amount = 0;
    if (service == 'R' || service == 'r')
    {
        if (minutes <= 50)
        {
            amount = 10.00;
        }
        else if (minutes > 50)
        {
            minutes = minutes - 50;
            amount = 10.00 + (minutes * 0.20);
        }
    }
    else if ((service == 'P' || service == 'p') && (time == 'D' || time == 'd'))
    {
        if (minutes <= 75)
        {
            amount = 25.00;
        }
        else if (minutes > 75)
        {
            minutes = minutes - 75;
            amount = 25.00 + (minutes * 0.10);
        }
    }
    else if ((service == 'P' || service == 'p') && (time == 'N' || time == 'n'))
    {
        if (minutes <= 100)
        {
            amount = 25.00;
        }
        else if (minutes > 100)
        {
            minutes = minutes - 100;
            amount = 25.00 + (minutes * 0.05);
        }
    }
    return amount;
    getch();
}
