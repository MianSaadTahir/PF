#include <iostream>
using namespace std;

void removeVowels(string);

main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    removeVowels(str);
}

void removeVowels(string str)
{
    cout << "String with vowels removed: ";
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ')
        {
            if (str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U' && str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u')
            {
                cout << str[i];
            }
        }
        else
        {
            cout << " ";
        }
    }
}