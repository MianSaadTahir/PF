#include <iostream>
#include <iomanip>
using namespace std;

void histogram(int numberCount);

main()
{
    int numberCount;
    cout << "Enter numbers count: ";
    cin >> numberCount;
    histogram(numberCount);
}

void histogram(int numberCount)
{
    int num = 0;
    float n1 = 0, n2 = 0, n3 = 0, n4 = 0, n5 = 0;

    for (int i = 1; i <= numberCount; i++)
    {
        cout << "Enter a number: ";
        cin >> num;
        if (num < 200)
        {
            n1++;
        }
        else if (num >= 200 && num < 400)
        {
            n2++;
        }
        else if (num >= 400 && num < 600)
        {
            n3++;
        }
        else if (num >= 600 && num < 800)
        {
            n4++;
        }
        else if (num >= 800)
        {
            n5++;
        }
    }
    n1 = (n1 / numberCount) * 100;
    n2 = (n2 / numberCount) * 100;
    n3 = (n3 / numberCount) * 100;
    n4 = (n4 / numberCount) * 100;
    n5 = (n5 / numberCount) * 100;

    cout << fixed << setprecision(2) << n1 << "%" << endl;
    cout << fixed << setprecision(2) << n2 << "%" << endl;
    cout << fixed << setprecision(2) << n3 << "%" << endl;
    cout << fixed << setprecision(2) << n4 << "%" << endl;
    cout << fixed << setprecision(2) << n5 << "%" << endl;
}