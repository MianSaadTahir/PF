#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int countCharacters(string fileName);

main()
{
    string fileName = "Task2.txt";
    int result = countCharacters(fileName);
    cout << "Total number of characters: " << result;
}

int countCharacters(string fileName)
{
    string text = " ";
    int countOfCharacters = 0;
    fstream file;
    file.open(fileName, ios::in);
    while (!file.eof())
    {
        getline(file, text);
        countOfCharacters += text.length();
    }
    file.close();
    return countOfCharacters;
}