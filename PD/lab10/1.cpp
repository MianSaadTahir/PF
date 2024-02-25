#include <iostream>
using namespace std;

bool isLengthEven(string array);

main()
{
    string array;
    cout << "Enter a String: ";
    cin >> array;
    cout << isLengthEven(array);
}

bool isLengthEven(string array)
{
    int length = array.length();
    if (length % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}