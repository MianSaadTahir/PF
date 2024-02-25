#include <iostream>
using namespace std;

void discount ( string name, float price );

main()
{
    string name;
    float price;

    cout << "Enter the country's name: ";
    cin >> name;
    cout << "Enter the ticket price in dollars: $";
    cin >> price;

    discount ( name, price );

}

void discount ( string name, float price )
{
    float a, disc;
    if ( name == "Pakistan")
    {
        a = price * 0.05;
        disc = price - a;
        cout << "Final ticket price after discount: $" << disc;
    }

    if ( name == "Ireland")
    {
        a = price * 0.1;
        disc = price - a;
        cout << "Final ticket price after discount: $" << disc;
    }

    if ( name == "India")
    {
        a = price * 0.2;
        disc = price - a;
        cout << "Final ticket price after discount: $" << disc;
    }

    if ( name == "England")
    {
        a = price * 0.3;
        disc = price - a;
        cout << "Final ticket price after discount: $" << disc;
    }

    if ( name == "Canada")
    {
        a = price * 0.45;
        disc = price - a;
        cout << "Final ticket price after discount: $" << disc;
    }
}