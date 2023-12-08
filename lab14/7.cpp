#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
using namespace std;

void displayWords(string fileName);

main()
{
    string fileName = "Task7.txt";
    displayWords(fileName);
}
void displayWords(string fileName)
{
    fstream file;
    file.open(fileName, ios::in);
    string line;

    while (getline(file, line))
    {
        istringstream iss(line);
        string word;
        while (iss >> word)
        {
            if (word.length() < 4)
            {
                cout << word << " ";
            }
        }
    }
    file.close();
}
