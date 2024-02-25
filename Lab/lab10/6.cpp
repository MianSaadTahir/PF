#include <iostream>
using namespace std;

int findLargestNumber(int array[], int number);

int main()
{
    int number;
    cout << "Enter the number of elements: ";
    cin >> number;
    int array[number];
    cout << "Enter " << number << " numbers, one per line:" << endl;
    for (int i = 0; i < number; i++)
    {
        cin >> array[i];
    }
    int result = findLargestNumber(array, number);
    cout << "The largest number entered is: " << result;
}

int findLargestNumber(int array[], int number)
{
    int largestNum = array[0];
    for (int i = 1; i < number; i++)
    {
        if (array[i] > largestNum)
        {
            largestNum = array[i];
        }
    }
    return largestNum;
}
