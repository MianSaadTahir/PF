#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void getStudentDetails(string names[], int ages[], float matricMarks[], float fscMarks[], float ecatMarks[], int STDcount);
void saveToFile(string names[], int ages[], float matricMarks[], float fscMarks[], float ecatMarks[], int STDcount);

main()
{
    string names[100];
    int ages[100];
    float matricMarks[100];
    float fscMarks[100];
    float ecatMarks[100];
    int STDcount = 0;
    getStudentDetails(names, ages, matricMarks, fscMarks, ecatMarks, STDcount);
}
void getStudentDetails(string names[], int ages[], float matricMarks[], float fscMarks[], float ecatMarks[], int STDcount)
{
    string takeInput = "Yes";
    while (takeInput == "Yes")
    {
        cout << "Enter student's name: ";
        cin >> names[STDcount];
        cout << "Enter student's age: ";
        cin >> ages[STDcount];
        cout << "Enter student's Matric marks: ";
        cin >> matricMarks[STDcount];
        cout << "Enter student's Fsc marks: ";
        cin >> fscMarks[STDcount];
        cout << "Enter student's Ecat marks: ";
        cin >> ecatMarks[STDcount];
        saveToFile(names, ages, matricMarks, fscMarks, ecatMarks, STDcount);
        cout << "Enter No to Stop or Yes to Continue Enter: ";
        cin >> takeInput;
        STDcount++;
    }
}
void saveToFile(string names[], int ages[], float matricMarks[], float fscMarks[], float ecatMarks[], int STDcount)
{
    fstream file;
    file.open("student.txt", ios::app);
    file << "Name: " << names[STDcount] << endl;
    file << "Age: " << ages[STDcount] << endl;
    file << "Matric Marks: " << matricMarks[STDcount] << endl;
    file << "Fsc Marks: " << fscMarks[STDcount] << endl;
    file << "Ecat Marks: " << ecatMarks[STDcount] << endl;
    file << endl;
    file.close();
}