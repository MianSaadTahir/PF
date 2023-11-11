#include <iostream>
using namespace std;

void shiftLetter(string str);

main()
{
    string str;
    cout << "Enter a String: ";
    getline(cin, str);
    shiftLetter(str);
}
void shiftLetter(string str)
{
    cout << "Shifted String: ";
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ')
        {
            char letter = str[i];
            if (letter == 'z')
            {
                cout << "a";
            }
            else if (letter == 'Z')
            {
                cout << "A";
            }
            else
            {
                int asciiCode = letter;
                asciiCode++;
                letter = asciiCode;
                cout << letter;
            }
        }
        else
        {
            cout << " ";
        }
    }
}
