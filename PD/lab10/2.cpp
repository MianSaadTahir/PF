#include <iostream>
using namespace std;

string containsSeven(int numbers[], int size);

main()
{
    int size;
    cout << "Enter the size of Array: ";
    cin >> size;
    int numbers[size];
    for (int i = 0; i < size; i++)
    {
        int position = i;
        cout << "Enter Element " << position + 1 << ": ";
        cin >> numbers[i];
    }
    string result = containsSeven(numbers, size);
    cout << result;
}

string containsSeven(int numbers[], int size)
{
    bool boom = false;
    for (int i = 0; i < size; i++)
    {
        if (numbers[i] == 7)
        {
            boom = true;
        }
    }
    if (boom == false)
    {
        for (int i = 0; i < size; i++)
        {
            if (numbers[i] > 9)
            {
                int numberAbove10 = numbers[i];
                while (numberAbove10 > 0 && boom == false)
                {
                    int mod = numberAbove10 % 10;
                    numberAbove10 /= 10;
                    if (mod == 7)
                    {
                        boom = true;
                    }
                }
            }
        }
    }
    if (boom == true)
    {
        return "Boom!";
    }
    else
    {
        return "there is no 7 in the array";
    }
}