#include <iostream>
using namespace std;

void plant(string seed, int stem, int flower, int temp);

main()
{
    string seed;
    int stem, flower, temp;
    cout << "Enter seed: ";
    cin >> seed;
    cout << "Enter stems: ";
    cin >> stem;
    cout << "Enter flowers: ";
    cin >> flower;
    cout << "Enter temperature: ";
    cin >> temp;
    plant(seed, stem, flower, temp);
}

void plant(string seed, int stem, int flower, int temp)
{
    if (temp >= 20 && temp <= 30)
    {
        for (int i = 1; i <= stem; i++)
        {
            for (int j = 1; j <= stem; j++)
            {
                cout << "-";
            }
            for (int k = 1; k <= flower; k++)
            {
                cout << seed;
            }
        }
    }
    else
    {
        int dead = stem * flower;
        for (int x = 1; x <= dead; x++)
        {
            cout << "-";
        }
        cout << seed;
    }
}