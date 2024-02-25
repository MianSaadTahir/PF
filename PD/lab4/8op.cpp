#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int x, int y)
{
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void printMenu();
void calculateAggregate(string name, float matricMarks, float interMarks, float ecatMarks);
void compareMarks(string nameStd1, float ecatMarksStd1, string nameStd2, float ecatMarksStd2);
main()
{
	string name, nameStd1, nameStd2;
	float matricMarks, interMarks, ecatMarks, ecatMarksStd1, ecatMarksStd2;
	printMenu();
	cout << endl;
	int req;
	gotoxy(46, 14);
	cout << " 1: Calculate Aggregate";
	gotoxy(46, 15);
	cout << " 2: Allot Roll Number";
	gotoxy(46, 17);
	cout << "Enter your requirement: ";
	cin >> req;
	if (req == 1)
	{
		calculateAggregate(name, matricMarks, interMarks, ecatMarks);
	}
	if (req == 2)
	{
		compareMarks(nameStd1, ecatMarksStd1, nameStd2, ecatMarksStd2);
	}
}
void printMenu()
{
	system("cls");
	gotoxy(40, 4);
	cout << "------------------------------------" << endl;
	gotoxy(40, 5);
	cout << "| 8    8    8888   88   88   8888  |         " << endl;
	gotoxy(40, 6);
	cout << "| 8    8   8    8  8 8 8 8   88    |     " << endl;
	gotoxy(40, 7);
	cout << "| 8    8   888888  8  8  8    88   |    " << endl;
	gotoxy(40, 8);
	cout << "| 8    8   8    8  8     8      88 |    " << endl;
	gotoxy(40, 9);
	cout << "|  8888    8    8  8     8   8888  |   " << endl;
	gotoxy(40, 10);
	cout << "------------------------------------" << endl;
	gotoxy(39, 12);
	cout << "UNIVERSITY ADMISSION MANAGEMENT SYSTEM " << endl;
}
void calculateAggregate(string name, float matricMarks, float interMarks, float ecatMarks)
{
	gotoxy(51, 19);
	cout << "..AGGREGATE.." << endl;
	cout << endl;
	gotoxy(40, 21);
	cout << "Enter your name: ";
	cin >> name;
	gotoxy(40, 22);
	cout << "Enter your matriculation marks (out of 1100): ";
	cin >> matricMarks;
	gotoxy(40, 23);
	cout << "Enter your intermediate marks (out of 550): ";
	cin >> interMarks;
	gotoxy(40, 24);
	cout << "Enter your ecat marks (out of 400): ";
	cin >> ecatMarks;
	float aggregate;
	aggregate = (((matricMarks / 1100) * 0.3) + ((interMarks / 550) * 0.3) + ((ecatMarks / 400) * 0.4)) * 100;
	gotoxy(45, 26);
	cout << "Your Aggregate is: " << aggregate << "%" << endl;
}
void compareMarks(string nameStd1, float ecatMarksStd1, string nameStd2, float ecatMarksStd2)
{
	gotoxy(50, 19);
	cout << "..ALLOT ROLL NO.." << endl;
	cout << endl;
	gotoxy(40, 21);
	cout << "Enter the name of 1st student: ";
	cin >> nameStd1;
	gotoxy(40, 22);
	cout << "Enter the ecat marks of 1st student: ";
	cin >> ecatMarksStd1;
	gotoxy(40, 24);
	cout << "Enter the name of 2nd Student: ";
	cin >> nameStd2;
	gotoxy(40, 25);
	cout << "Enter the ecat marks of 2nd student: ";
	cin >> ecatMarksStd2;
	if (ecatMarksStd1 > ecatMarksStd2)
	{
		gotoxy(50, 28);
		cout << "Roll no.1: " << nameStd1 << endl;
		gotoxy(50, 29);
		cout << "Roll no.2: " << nameStd2 << endl;
	}
	else
	{
		gotoxy(50, 28);
		cout << "Roll no.1: " << nameStd2 << endl;
		gotoxy(50, 29);
		cout << "Roll no.2: " << nameStd1 << endl;
	}
}
