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
        int j = chords[i].length();
        if (chords[i][j - 1] != '7')
        {
            chords[i] += '7';
        }
    }

    for (int i = 0; i < numChords; i++)
    {
        if (i < numChords - 1)
        {
            cout << chords[i] << ", ";
        }
        else if (i == numChords - 1)
        {
            cout << chords[i] << "]";
        }
    }
}