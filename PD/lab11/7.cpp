#include <iostream>
using namespace std;

bool canBeArranged(int length, int array[]);

main()
{
    int length;
    cout << "Enter the length of the array: ";
    cin >> length;
    int array[length];
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < length; i++)
    {
        cin >> array[i];
    }
    bool result = canBeArranged(length, array);
    cout << "Can be arranged: " << result;
}
bool canBeArranged(int length, int array[])
{
    bool result;
    int temporary = 0;
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                temporary = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temporary;
            }
        }
    }
    for (int x = 0; x < length - 1; x++)
    {
        if (array[x] + 1 != array[x + 1])
        {
            return false;
        }
    }
    return true;
}
