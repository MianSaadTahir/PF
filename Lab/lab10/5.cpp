#include <iostream>
using namespace std;

bool isAlreadyEntered(int arr[], int size, int number);

main()
{
    int number;
    cout << "Enter the number of elements: ";
    cin >> number;
    int arr[number];
    int uniqueNumbers = 0;
    cout << "Enter " << number << " numbers, one per line:" << endl;
    for (int i = 0; i < number; i++)
    {
        int input;
        cin >> input;
        if (isAlreadyEntered(arr, uniqueNumbers, input))
        {
            cout << "Already Entered: " << input << endl;
        }
        else
        {
            arr[uniqueNumbers++] = input;
        }
    }
    cout << "Unique numbers entered: ";
    for (int i = 0; i < uniqueNumbers; i++)
    {
        cout << arr[i] << " ";
    }
}

bool isAlreadyEntered(int arr[], int size, int number)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == number)
        {
            return true;
        }
    }
    return false;
}
