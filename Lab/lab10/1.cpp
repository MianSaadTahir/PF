#include <iostream>
using namespace std;

void location(char word[]);

main()
{
    char word[100];
    cout << "Enter a word: ";
    cin >> word;
    location(word);
}
void location(char word[])
{
    for (int i = 0; word[i] != '\0'; i++)
    {
        cout << word[i] << " found at position " << i << endl;
    }
}