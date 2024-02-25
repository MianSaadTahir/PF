#include <iostream>
#include <string>
using namespace std;

int specialValue(int length, int nums[]);

main()
{
    int length;
    cout << "Enter the length of the array: ";
    cin >> length;
    int nums[length];
    cout << "Enter the nums of the array: " << endl;
    for (int x = 0; x < length; x++)
    {
        cin >> nums[x];
    }

    int result = specialValue(length, nums);
    cout << "Special value: " << result;
}

int specialValue(int length, int nums[])
{
    int special = 0, count = 0;
    for (int x = 0; x < length; x++)
    {
        count = 0;
        for (int y = 0; y < length; y++)
        {
            if (nums[y] >= x)
            {
                count++;
            }
        }
        if (count == x + 1)
        {
            special = x + 1;
            break;
        }
    }
    if (special == 0)
    {
        return -1;
    }
    else
    {
        return special;
    }
}
