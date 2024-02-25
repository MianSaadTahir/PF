#include <iostream>
using namespace std;

int countIdenticalArrays(int elements[][3], int rowSize);

main()
{
    int rowSize;
    cout << "Enter the number of rows for the array: ";
    cin >> rowSize;
    int elements[rowSize][3];
    cout << "Enter the elements of the array: " << endl;
    for (int row = 0; row < rowSize; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << "Enter element at position [" << row << "][" << col << "]: ";
            cin >> elements[row][col];
        }
    }
    int result = countIdenticalArrays(elements, rowSize);
    cout << "The count of identical rows in the array is: " << result;
}

int countIdenticalArrays(int elements[][3], int rowSize)
{
    int row = 0, identicalRows = 0;
    while (row < rowSize)
    {
        for (int nextRow = 0; nextRow < rowSize; nextRow++)
        {
            if (row >= nextRow)
            {
                continue;
            }
            int identicalElements = 0;
            for (int col = 0; col < 3; col++)
            {
                if (elements[row][col] == elements[nextRow][col])
                {
                    identicalElements++;
                }
            }
            if (identicalElements == 3)
            {
                identicalRows++;
            }
        }
        row++;
    }
    return identicalRows;
}
