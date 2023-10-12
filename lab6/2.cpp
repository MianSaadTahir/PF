#include <iostream>
using namespace std;

bool parityAnalysis(int num);

main()
{
    int num;
    cout << "Enter a 3-digit number: ";
    cin >> num;
    int result = parityAnalysis(num);
    cout << result;
}
bool parityAnalysis(int num)
{
    int mod1 = num % 10;
    int num1 = num / 10;
    int mod2 = num1 % 10;
    int num2 = num1 / 10;
    int mod3 = num2 % 10;
    int mod = mod1 + mod2 + mod3;
    if (mod % 2 == 0 && num % 2 == 0)
    {
        return 1;
    }
    if (mod % 2 == 1 && num % 2 == 1)
    {
        return 0;
    }
}