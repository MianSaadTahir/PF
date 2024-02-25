#include <iostream>
using namespace std;

void evenOddTransform(int arr[], int size, int n);

main()
{
    int size, n;
    cout << "Enter the size of Array: ";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        int position = i;
        cout << "Enter Element " << position + 1 << ": ";
        cin >> arr[i];
    }
    cout << "Enter number of times even-odd transformation need to be done: ";
    cin >> n;
    evenOddTransform(arr, size, n);
}

void evenOddTransform(int arr[], int size, int n)
{
    for (int count = 1; count <= n; count++)
    {
        for (int i = 0; i < size; i++)
        {
            if (arr[i] % 2 == 1)
            {
                arr[i] += 2;
            }
            else
            {
                arr[i] -= 2;
            }
        }
    }
    cout << "[";
    for (int i = 0; i < size; i++)
    {
        if (i < size - 1)
        {
            cout << arr[i] << ", ";
        }
        else if (i == size - 1)
        {
            cout << arr[i];
        }
    }
    cout << "]";
}