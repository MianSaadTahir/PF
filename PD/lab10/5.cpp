#include <iostream>
using namespace std;

int commonCharacters(string str1, string str2);

main()
{
    string str1, str2;
    cout << "Enter the first string: ";
    cin >> str1;
    cout << "Enter the second string: ";
    cin >> str2;
    int result = commonCharacters(str1, str2);
    cout << "Number of common characters: " << result;
}
int commonCharacters(string str1, string str2)
{
    int count = 0;
    for (int i1 = 0; i1 < str1.length(); i1++)
    {
        for (int i2 = 0; i2 < str2.length(); i2++)
        {
            if (str1[i1] == str2[i2])
            {
                count++;
                str2[i2] = ' ';
                break;
            }
        }
    }
    return count;
}