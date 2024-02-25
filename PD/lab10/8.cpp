#include <iostream>
using namespace std;

bool repetition(string brokenKeys, char character);
string findBrokenKeys(string correctPhrase, string actualTyped);

main()
{
    string correctPhrase, actualTyped;
    cout << "Enter the correct phrase: ";
    getline(cin, correctPhrase);
    cout << "Enter what you actually typed: ";
    getline(cin, actualTyped);

    string result = findBrokenKeys(correctPhrase, actualTyped);
    cout << "Broken keys: " << result;
}

string findBrokenKeys(string correctPhrase, string actualTyped)
{
    string BrokenKeys = "";
    for (int i = 0; i < correctPhrase.length(); i++)
    {
        if (correctPhrase[i] != actualTyped[i])
        {
            if (repetition(BrokenKeys, correctPhrase[i]) == false)
            {
                BrokenKeys += correctPhrase[i];
            }
        }
    }
    return BrokenKeys;
}

bool repetition(string BrokenKeys, char character)
{
    bool repeat = false;
    for (int i = 0; i < BrokenKeys.length(); i++)
    {
        if (BrokenKeys[i] == character)
        {
            repeat = true;
            break;
        }
    }
    return repeat;
}
