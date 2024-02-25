#include <iostream>
using namespace std;

string longest7SegmentWord(string words[], int size);

main()
{
    int size;
    cout << "Enter the number of words: ";
    cin >> size;
    string words[size];
    cout << "Enter the words, one by one: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> words[i];
    }
    string result = longest7SegmentWord(words, size);
    cout << "Longest 7-segment word: " << result;
}

string longest7SegmentWord(string words[], int size)
{
    string longest = "";
    int counter[size];
    for (int i = 0; i < size; i++)
    {
        counter[i] = 0;
        string lettersInWords = words[i];
        int j = 0;
        while (lettersInWords[j] != '\0')
        {
            if (lettersInWords[j] == 'k' || lettersInWords[j] == 'm' || lettersInWords[j] == 'v' || lettersInWords[j] == 'w' || lettersInWords[j] == 'x')
            {
                words[i] = "";
                counter[i] = 0;
                break;
            }
            counter[i]++;
            j++;
        }
    }
    for (int i = 0; i < size; i++)
    {
        if (counter[i + 1] > counter[i])
        {
            longest = words[i + 1];
        }
    }
    return longest;
}