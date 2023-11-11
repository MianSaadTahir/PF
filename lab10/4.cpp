#include <iostream>
using namespace std;

void reverse(int elements[], int num);

main()
{
    int num;
    cout << "Enter the number of elements: ";
    cin >> num;

    if (num < 1)
    {
        cout << "Invalid input. Number of elements must be greater than 0.";
    }
    else
    {
        int elements[num];
        cout << "Enter " << num << " numbers, one per line:" << endl;
        for (int i = 0; i < num; i++)
        {
            cin >> elements[i];
        }
        cout << "Numbers in reverse order: ";
        reverse(elements, num);
    }
}

void reverse(int elements[], int num)
{
    for (int i = num - 1; i >= 0; i--)
    {
        cout << elements[i] << " ";
    }
}
