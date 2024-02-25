#include <iostream>
using namespace std;

bool isRepeatingCycle(int elements[], int lengthOFarray, int lengthOFcycle);

main()
{
    int lengthOFarray, lengthOFcycle;
    cout << "Enter the length of the array: ";
    cin >> lengthOFarray;
    int elements[lengthOFarray];
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < lengthOFarray; i++)
    {
        cin >> elements[i];
    }
    cout << "Enter the length of the cycle: ";
    cin >> lengthOFcycle;
    bool result = isRepeatingCycle(elements, lengthOFarray, lengthOFcycle);
    cout << "Output: " << result;
}

bool isRepeatingCycle(int elements[], int lengthOFarray, int lengthOFcycle)
{
    bool result;
    if (lengthOFcycle > lengthOFarray)
    {
        result = true;
    }
    else
    {
        for (int i = 0; i < lengthOFcycle; i++)
        {
            if (elements[i] == elements[i + lengthOFcycle])
            {
                result = true;
            }
            else if (i + lengthOFcycle > lengthOFcycle)
            {
                result = true;
            }

            else
            {
                result = false;
            }
        }
    }
    return result;
}