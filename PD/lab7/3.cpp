#include <iostream>
using namespace std;

void amplify(int num);

main()
{
    int num;
    cout << "Enter the number to Amplify: ";
    cin >> num;
    amplify(num);
}

void amplify(int num)
{
    int num1;
    for (int count = 1; count <= num; count++)
    {
        if (count % 4 == 0)
        {
            num1 = count;
            num1 = 10 * num1;
            cout << num1 << ", ";
            continue;
        }
        if (count < num)
        {
            cout << count << ", ";
        }
        else
        {
            cout << count;
        }
    }
}