#include <iostream>
using namespace std;

bool checkIdentityMatrix(int matrix[][3]);

main()
{
    int matrix[3][3];
    cout << "Enter the elements of the matrix:" << endl;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << "Enter element at position [" << row << "][" << col << "]: ";
            cin >> matrix[row][col];
        }
    }
    cout << "The matrix you entered is: " << endl;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << matrix[row][col] << "\t";
        }
        cout << endl;
    }
    bool result = checkIdentityMatrix(matrix);
    if (result)
    {
        cout << "The entered matrix is an identity matrix.";
    }
    else
    {
        cout << "The entered matrix is NOT an identity matrix.";
    }
}
bool checkIdentityMatrix(int matrix[][3])
{
    if ((matrix[0][0] == 1 && matrix[0][1] == 0 && matrix[0][2] == 0) && (matrix[1][0] == 0 && matrix[1][1] == 1 && matrix[1][2] == 0) && (matrix[2][0] == 0 && matrix[2][1] == 0 && matrix[2][2] == 1))
    {
        return true;
    }
    return false;
}