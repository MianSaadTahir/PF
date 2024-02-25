#include <iostream>
using namespace std;

int rotations(int length, string array[]);

main()
{
    int length;
    cout << "Enter the length of the array: ";
    cin >> length;
    string array[length];
    cout << "Enter the elements of the array (\"left\" or \"right\"):" << endl;
    for (int idx = 0; idx < length; idx++)
    {
        cin >> array[idx];
    }
    int result = rotations(length, array);
    cout << "Number of full rotations: " << result;
}
int rotations(int length, string array[])
{
    int more = 0;
    int rotated = 0;
    for (int i = 0; i < length; i++)
    {
        if (array[i] == "right")
        {
            more += 90;
        }
        else if (array[i] == "left")
        {
            more -= 90;
        }
    }
    rotated = more / 360;
    if (rotated < 0)
    {
        rotated = -(rotated);
    }
    return rotated;
}