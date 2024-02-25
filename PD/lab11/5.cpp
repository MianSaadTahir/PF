#include <iostream>
using namespace std;

string sortedArray(int num, int packages[]);

main()
{
    int num = 10;
    int packages[num];
    cout << "Enter the weights of the 10 packages: " << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> packages[i];
    }
    string result = sortedArray(num, packages);
    cout << "Sorted array in ascending order: " << result;
}

string sortedArray(int num, int packages[])
{
    int temporary = 0;
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num - 1; j++)
        {
            if (packages[j] > packages[j + 1])
            {
                temporary = packages[j];
                packages[j] = packages[j + 1];
                packages[j + 1] = temporary;
            }
        }
    }

    string result = "[" + to_string(packages[0]);
    for (int i = 1; i < 10; i++)
    {
        result += ", " + to_string(packages[i]);
    }
    result += "]";
    return result;
}