#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;

main()
{
    int a;
    float n, result;
    cout << "Enter a number: ";
    cin >> n;
    result = sqrt(n);
    cout << "The square root of " << n << " is: " << result;
    getch();
}