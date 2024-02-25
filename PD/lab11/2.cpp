#include <iostream>
using namespace std;

int duplication(string arrayOFwords[], int words, char letter);

main()
{
    int words;
    char letter;
    cout << "Enter how many words you want to enter: ";
    cin >> words;
    string arrayOFwords[words];
    for (int i = 0; i < words; i++)
    {
        cout << "Enter word " << i + 1 << ": ";
        cin >> arrayOFwords[i];
    }
    cout << "Enter the letter you want to count: ";
    cin >> letter;
    int result = duplication(arrayOFwords, words, letter);
    cout << letter << " shows up " << result << " times in the data.";
}

int duplication(string arrayOFwords[], int words, char letter)
{
    int count = 0;
    for (int i = 0; i < words; i++)
    {
        string lettersINword = arrayOFwords[i];
        for (int j = 0; lettersINword[j] != '\0'; j++)
        {
            if (letter == lettersINword[j])
            {
                count++;
            }
        }
    }
    return count;
}