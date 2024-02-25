#include <iostream>
using namespace std;

float calculateAverage(float marksEnglish, float marksMaths, float marksChemistry, float marksSocialScience, float marksBiology);
string calculateGrade(float avg);

main()
{
    string name;
    float marksEnglish, marksMaths, marksChemistry, marksSocialScience, marksBiology, average;
    cout << "Enter student name: ";
    cin >> name;
    cout << "Enter marks for English: ";
    cin >> marksEnglish;
    cout << "Enter marks for Maths: ";
    cin >> marksMaths;
    cout << "Enter marks for Chemistry: ";
    cin >> marksChemistry;
    cout << "Enter marks for Social Science: ";
    cin >> marksSocialScience;
    cout << "Enter marks for Biology: ";
    cin >> marksBiology;
    cout << "Student Name: " << name << endl;
    float avg = calculateAverage(marksEnglish, marksMaths, marksChemistry, marksSocialScience, marksBiology);
    cout << "Percentage: " << calculateAverage(marksEnglish, marksMaths, marksChemistry, marksSocialScience, marksBiology) << "%" << endl;
    cout << "Grade: " << calculateGrade(avg);
}

float calculateAverage(float marksEnglish, float marksMaths, float marksChemistry, float marksSocialScience, float marksBiology)
{
    float average = (marksEnglish + marksMaths + marksChemistry + marksSocialScience + marksBiology) / 5;
    return average;
}

string calculateGrade(float avg)
{
    if (avg >= 90 && avg <= 100)
    {
        return "A+";
    }
    else if (avg >= 80 && avg <= 90)
    {
        return "A";
    }
    else if (avg >= 70 && avg <= 80)
    {
        return "B+";
    }
    else if (avg >= 60 && avg <= 70)
    {
        return "B";
    }
    else if (avg >= 50 && avg <= 60)
    {
        return "C";
    }
    else if (avg >= 40 && avg <= 50)
    {
        return "D";
    }
    else if (avg < 40)
    {
        return "F";
    }
}
