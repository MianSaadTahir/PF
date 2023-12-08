#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void getStudentDetails(string names[], int adNumbers[], float percentages[], int size, int &count, string fileName);
void saveToFile(string names[], int adNumbers[], float percentages[], int count, string fileName);

main()
{
    int maxSize = 100;
    string names[maxSize];
    int adNumbers[maxSize];
    float percentages[maxSize];
    int count = 0;

    getStudentDetails(names, adNumbers, percentages, maxSize, count, "Task5.txt");

    saveToFile(names, adNumbers, percentages, count, "topperStudents.txt");
}

void getStudentDetails(string names[], int adNumbers[], float percentages[], int size, int &count, string fileName)
{
    fstream inputFile;
    inputFile.open(fileName, ios::in);
    while (inputFile >> names[count] >> adNumbers[count] >> percentages[count])
    {
        if (percentages[count] > 70)
        {
            count++;
        }
    }

    inputFile.close();
}

void saveToFile(string names[], int adNumbers[], float percentages[], int count, string fileName)
{
    fstream outputFile;
    outputFile.open(fileName, ios::out);
    for (int i = 0; i < count; ++i)
    {
        outputFile << "Name: " << names[i] << endl;
        outputFile << "Admission Number: " << adNumbers[i] << endl;
        outputFile << "Percentage: " << percentages[i] << endl
                   << endl;
    }

    outputFile.close();
}
