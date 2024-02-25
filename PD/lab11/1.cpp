#include <iostream>
using namespace std;

int progress(int arrayOFmiles[], int saturdays);

main()
{
    int saturdays;
    cout << "Enter the number of Saturdays: ";
    cin >> saturdays;
    int arrayOFmiles[saturdays];
    for (int i = 0; i < saturdays; i++)
    {
        cout << "Enter miles run for Saturday " << i + 1 << ": ";
        cin >> arrayOFmiles[i];
    }
    int result = progress(arrayOFmiles, saturdays);
    cout << "Total progress days: " << result;
}

int progress(int arrayOFmiles[], int saturdays)
{
    int count = -1;
    for (int i = 0; i < saturdays; i++)
    {
        if (arrayOFmiles[i] < arrayOFmiles[i + 1])
        {
            count++;
        }
    }
    return count;
}