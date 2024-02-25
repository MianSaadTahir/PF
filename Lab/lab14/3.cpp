#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int calculateFrequency(string fileName);

main()
{
    string fileName = "Task3.txt";
    int result = calculateFrequency(fileName);
    cout << "Total number of characters: " << result;
}
int calculateFrequency(string fileName)
{
    char targetCharacter = ' ';
    char character = ' ';
    fstream file;
    int countFrequency = 0;
    file.open(fileName, ios::in);
    file.get(targetCharacter);
    targetCharacter = tolower(targetCharacter);
    while (!file.eof())
    {
        file.get(character);
        character = tolower(character);
        if (character == targetCharacter)
        {
            countFrequency++;
        }
    }
    return countFrequency;
}