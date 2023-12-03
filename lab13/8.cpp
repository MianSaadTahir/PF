#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int rowSize;
    cout << "Enter row size: ";
    cin >> rowSize;
    int elements[rowSize][5];

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << "Enter element at position [" << i << "]"
                 << "[" << j << "]: ";
            cin >> elements[i][j];
        }
    }
    cout << endl;
    cout << "Original Matrix: " << endl;
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << elements[i][j] << " ";
        }
        cout << endl;
    }

    // finding largest column
    int maxSum = 0;
    int columnWithMaxSum = 0;
    for (int j = 0; j < 5; j++)
    {
        int sum = 0;
        for (int i = 0; i < rowSize; i++)
        {
            sum += elements[i][j];
        }
        if (sum > maxSum)
        {
            maxSum = sum;
            columnWithMaxSum = j;
        }
    }

    // swaping largest column
    int temporary;
    for (int i = 0; i < rowSize; i++)
    {
        temporary = elements[i][0];
        elements[i][0] = elements[i][columnWithMaxSum];
        elements[i][columnWithMaxSum] = temporary;
    }
    cout << endl;
    cout << "Matrix after largest column moved to first: " << endl;
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << elements[i][j] << " ";
        }
        cout << endl;
    }
    getch();
}