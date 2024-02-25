#include <iostream>
using namespace std;

main()
{
    int sum = 0;
    int rowSize = 0;
    cout << "Enter row size: ";
    cin >> rowSize;
    int matrix[rowSize][3];
    cout << "Enter the elements of the matrix:" << endl;
    for (int row = 0; row < rowSize; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << "Enter element at position [" << row << "][" << col << "]: ";
            cin >> matrix[row][col];
            sum += matrix[row][col];
        }
    }
    cout << "The sum of elements in the matrix is: " << sum;
}