#include <iostream>
using namespace std;

void cargo(int count);

main()
{
    int count;
    cout << "Enter the count of cargo for transportation: ";
    cin >> count;
    cargo(count);
}
void cargo(int count)
{
    float ton = 0, minibus = 0, truck = 0, train = 0, sum = 0, average = 0, minibusP = 0, truckP = 0, trainP = 0;

    for (float i = 1; i <= count; i++)
    {
        cout << "Enter the tonnage of cargo " << i << ": ";
        cin >> ton;
        if (ton <= 3)
        {
            minibus += ton;
        }
        else if (ton > 3 && ton <= 11)
        {
            truck += ton;
        }
        else
        {
            train += ton;
        }
    }

    sum = minibus + truck + train;

    minibusP = (minibus / sum) * 100;
    truckP = (truck / sum) * 100;
    trainP = (train / sum) * 100;

    average = ((minibus * 200) + (truck * 175) + (train * 120)) / sum;

    cout << average << endl;
    cout << minibusP << "%" << endl;
    cout << truckP << "%" << endl;
    cout << trainP << "%" << endl;
}