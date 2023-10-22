#include <iostream>
using namespace std;

int calculateMoney(int age, int priceMachine, int priceToy);

main()
{
    int age, priceMachine, priceToy;
    cout << "Enter Lilly's age: ";
    cin >> age;
    cout << "Enter the price of the washing machine: ";
    cin >> priceMachine;
    cout << "Enter the unit price of each toy: ";
    cin >> priceToy;
    int totalSavings = calculateMoney(age, priceMachine, priceToy);
    if (totalSavings > priceMachine)
    {
        totalSavings -= priceMachine;
        cout << "Yes!" << endl
             << totalSavings;
    }
    else if (totalSavings < priceMachine)
    {
        priceMachine -= totalSavings;
        cout << "No!" << endl
             << priceMachine;
    }
}

int calculateMoney(int age, int priceMachine, int priceToy)
{
    int evenBD = 0, oddBD = 0, savings = 0, BDmoney = 10;
    for (int i = 1; i < age; i += 2)
    {
        oddBD += priceToy;
    }
    for (int i = 2; i <= age; i += 2)
    {
        evenBD += (BDmoney - 1);
        BDmoney += 10;
    }
    savings = oddBD + evenBD;
    return savings;
}