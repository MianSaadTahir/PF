#include <iostream>
using namespace std;

int coloringTime(string cols[], int size);

main()
{
    int size;
    cout << "Enter the size of Array: ";
    cin >> size;
    string cols[size];
    for (int i = 0; i < size; i++)
    {
        int position = i;
        cout << "Enter Element " << position + 1 << ": ";
        cin >> cols[i];
    }
    int result = coloringTime(cols, size);
    cout << "Time to color: " << result << " seconds";
}

int coloringTime(string cols[], int size)
{
    int changePencil = 0;
    int seconds = 2 * size;
    for (int i = 0; i < size - 1; i++)
    {
        if (cols[i] != cols[i + 1])
        {
            changePencil++;
        }
    }
    seconds += changePencil;
    return seconds;
}