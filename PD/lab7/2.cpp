#include <iostream>
using namespace std;

void upperShape(int rows);
void lowerShape(int rows);

main()
{
    int rows;
    cout << "Enter desired number of rows : ";
    cin >> rows;
    rows = rows / 2;
    upperShape(rows);
    lowerShape(rows);
}

void upperShape(int rows)
{
    int spaces = rows - 1;
    int star = 1;
    for (int count = 1; count <= rows; count++)
    {
        for (int count1 = 1; count1 <= rows - star; count1++)
        {
            cout << " ";
        }
        for (int count2 = 1; count2 <= rows - spaces; count2++)
        {
            cout << "*";
        }
        cout << endl;
        spaces--;
        star++;
    }
}

void lowerShape(int rows)
{
    int spaces = 0;
    int star = rows;
    for (int count = 1; count <= rows; count++)
    {
        for (int count1 = 1; count1 <= rows - star; count1++)
        {
            cout << " ";
        }
        for (int count2 = 1; count2 <= rows - spaces; count2++)
        {
            cout << "*";
        }
        cout << endl;
        spaces++;
        star--;
    }
}