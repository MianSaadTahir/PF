#include <iostream>
using namespace std;

bool areAllElementsIdentical(string array[], int size);

main()
{
    int size;
    cout << "Enter the size of Array: ";
    cin >> size;
    string array[size];
    for (int i = 0; i < size; i++)
    {
        int position = i;
        cout << "Enter Element " << position + 1 << ": ";
        cin >> array[i];
    }
    cout << areAllElementsIdentical(array, size);
}

bool areAllElementsIdentical(string array[], int size)
{
    int count = 0;
    string element1 = array[0];
    for (int i = 0; i < size; i++)
    {
        if (element1 == array[i])
        {
            count++;
        }
    }
    if (count == size)
    {
        return true;
    }
    else
    {
        return false;
    }
}
