#include <iostream>
using namespace std;

double calculateTotalResistance(double resistance[], int size);

main()
{
    int size;
    cout << "Enter the number of resistors in the series circuit: ";
    cin >> size;
    double resistance[size];
    cout << "Enter the resistance values (in ohms) of the " << size << " resistors, one per line:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> resistance[i];
    }
    double result = calculateTotalResistance(resistance, size);
    cout << "The total resistance of the series circuit is " << result << " ohms.";
}
double calculateTotalResistance(double resistance[], int size)
{
    double rt = 0;
    for (int i = 0; i < size; i++)
    {
        rt += resistance[i];
    }
    return rt;
}
