#include <iostream>
#include <fstream>

using namespace std;

int countLines(string fileName);

main()
{
    string fileName = "Task6.txt";
    int result = countLines(fileName);
    cout << "Total number of lines: " << result << endl;
}

int countLines(string fileName)
{
    fstream filein;
    filein.open(fileName, ios::in);
    string firstLine = " ";
    getline(filein, firstLine);
    char alphabet = firstLine[0];
    string line = " ";
    int linesCount = 0;
    while (getline(filein, line))
    {
        if (line[0] != alphabet)
        {
            linesCount++;
        }
    }
    filein.close();
    return linesCount;
}