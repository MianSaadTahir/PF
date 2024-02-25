#include <iostream>
using namespace std;

float taxCalculator(char type, float price);

main()
{
    char type;
    float price;
    cout << "Enter the vehicle type code (M, E, S, V, T): ";
    cin >> type;
    cout << "Enter the price of the vehicle: $";
    cin >> price;
    float result = taxCalculator(type, price);
    cout << "The final price of a vehicle of type " << type << " after adding the tax is $" << to_string(result) << ".";
}

float taxCalculator(char type, float price)
{
    if (type == 'M')
    {
        float taxAmount = price * (6 / 100.0);
        float finalPrice = price + taxAmount;
        return finalPrice;
    }
    if (type == 'E')
    {
        float taxAmount = price * (8 / 100.0);
        float finalPrice = price + taxAmount;
        return finalPrice;
    }
    if (type == 'S')
    {
        float taxAmount = price * (10 / 100.0);
        float finalPrice = price + taxAmount;
        return finalPrice;
    }
    if (type == 'V')
    {
        float taxAmount = price * (12 / 100.0);
        float finalPrice = price + taxAmount;
        return finalPrice;
    }
    if (type == 'T')
    {
        float taxAmount = price * (15 / 100.0);
        float finalPrice = price + taxAmount;
        return finalPrice;
    }
}