#include <iostream>
using namespace std;

void jazzifyChords(string chords[], int numChords);

main()
{
    int numChords;
    cout << "Enter the number of chords: ";
    cin >> numChords;
    string chords[numChords];
    cout << "Enter " << numChords << " chords, one per line:" << endl;
    for (int i = 0; i < numChords; i++)
    {
        cin >> chords[i];
    }
    jazzifyChords(chords, numChords);
}

void jazzifyChords(string chords[], int numChords)
{
    cout << "Jazzified chords: [";
    for (int i = 0; i < numChords; i++)
    {
        string word = chords[i];
        string jazzified = chords[i];
        int j = 0;
        while (jazzified[j] != '\0')
        {
            if (jazzified[j] != '7' && jazzified[j + 1] == '\0')
            {
                word += '7';
            }
            j++;
        }
        if (i == (numChords - 1))
        {
            cout << word << "]";
            break;
        }
        cout << word << ", ";
    }
}