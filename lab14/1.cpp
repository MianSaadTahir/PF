#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int countLines(string fileName);

main()
{
    string fileName = "Task1.txt";
    int result = countLines(fileName);
    cout << "Total number of lines: " << result;
}

int countLines(string fileName)
{
    string text = " ";
    int countOfLines = 0;
    fstream file;
    file.open(fileName, ios::in);
    while (!file.eof())
    {
        getline(file, text);
        countOfLines++;
    }
    file.close();
    return countOfLines;
}