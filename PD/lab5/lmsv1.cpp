#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;
void gotoxy(int x, int y);
void header(int x, int y);
int menu();

main()
{
    system("cls");
    int x = 35, y = 3;
    header(x, y);
    string name1 = "", name2 = "", name3 = "";
    float matricMarks1 = 0, interMarks1 = 0, ecatMarks1 = 0, matricMarks2 = 0, interMarks2 = 0, ecatMarks2 = 0, matricMarks3 = 0, interMarks3 = 0, ecatMarks3 = 0;

    while (true)
    {
        header(x, y);
        int option = menu();
        if (option == 1)
        {
            gotoxy(40, 22);
            cout << "++++++++++++++++++++++++++" << endl;
            gotoxy(40, 23);
            cout << "+                        +" << endl;
            gotoxy(40, 24);
            cout << "+   1st Student's Data   +" << endl;
            gotoxy(40, 25);
            cout << "+                        +" << endl;
            gotoxy(40, 26);
            cout << "++++++++++++++++++++++++++" << endl;
            cout << "Enter the name of 1st Student: ";
            cin >> name1;
            cout << "Enter matriculation marks (out of 1100): ";
            cin >> matricMarks1;
            cout << "Enter intermediate marks (out of 550): ";
            cin >> interMarks1;
            cout << "Enter ECAT score (out of 400): ";
            cin >> ecatMarks1;
        }
        if (option == 2)
        {
            gotoxy(40, 22);
            cout << "++++++++++++++++++++++++++" << endl;
            gotoxy(40, 23);
            cout << "+                        +" << endl;
            gotoxy(40, 24);
            cout << "+   2nd Student's Data   +" << endl;
            gotoxy(40, 25);
            cout << "+                        +" << endl;
            gotoxy(40, 26);
            cout << "++++++++++++++++++++++++++" << endl;
            cout << "Enter the name of 2nd Student: ";
            cin >> name2;
            cout << "Enter matriculation marks (out of 1100): ";
            cin >> matricMarks2;
            cout << "Enter intermediate marks (out of 550): ";
            cin >> interMarks2;
            cout << "Enter ECAT score (out of 400): ";
            cin >> ecatMarks2;
        }
        if (option == 3)
        {
            gotoxy(40, 22);
            cout << "++++++++++++++++++++++++++" << endl;
            gotoxy(40, 23);
            cout << "+                        +" << endl;
            gotoxy(40, 24);
            cout << "+   3rd Student's Data   +" << endl;
            gotoxy(40, 25);
            cout << "+                        +" << endl;
            gotoxy(40, 26);
            cout << "++++++++++++++++++++++++++" << endl;
            cout << "Enter the name of 3rd Student: ";
            cin >> name3;
            cout << "Enter matriculation marks (out of 1100): ";
            cin >> matricMarks3;
            cout << "Enter intermediate marks (out of 550): ";
            cin >> interMarks3;
            cout << "Enter ECAT score (out of 400): ";
            cin >> ecatMarks3;
        }
        if (option == 4)
        {
            float agg1, agg2, agg3;
            agg1 = (((matricMarks1 / 1100) * 0.3) + ((interMarks1 / 550) * 0.3) + ((ecatMarks1 / 400) * 0.4)) * 100;
            agg2 = (((matricMarks2 / 1100) * 0.3) + ((interMarks2 / 550) * 0.3) + ((ecatMarks2 / 400) * 0.4)) * 100;
            agg3 = (((matricMarks3 / 1100) * 0.3) + ((interMarks3 / 550) * 0.3) + ((ecatMarks3 / 400) * 0.4)) * 100;
            gotoxy(40, 22);
            cout << "+++++++++++++++++++++++++" << endl;
            gotoxy(40, 23);
            cout << "+                       +" << endl;
            gotoxy(40, 24);
            cout << "+   All Students Data   +" << endl;
            gotoxy(40, 25);
            cout << "+                       +" << endl;
            gotoxy(40, 26);
            cout << "+++++++++++++++++++++++++" << endl
                 << endl;
            cout << "Name"
                 << "\t"
                 << "Matric marks"
                 << "\t"
                 << "Inter marks"
                 << "\t"
                 << "ECAT score"
                 << "\t"
                 << "Aggregate" << endl;
            cout << name1 << "\t" << matricMarks1 << "\t\t" << interMarks1 << "\t\t" << ecatMarks1 << "\t\t" << agg1 << "%" << endl;
            cout << name2 << "\t" << matricMarks2 << "\t\t" << interMarks2 << "\t\t" << ecatMarks2 << "\t\t" << agg2 << "%" << endl;
            cout << name3 << "\t" << matricMarks3 << "\t\t" << interMarks3 << "\t\t" << ecatMarks3 << "\t\t" << agg3 << "%" << endl;
        }
        if (option == 5)
        {
            return 0;
        }
        cout << "Press any key to continue: ";
        getch();
        system("cls");
    }
}

int menu()
{
    int option;
    cout << "Select one of the following options number:" << endl;
    cout << "(please add students data before viewing tabular form)" << endl
         << endl;
    cout << "1. Add 1st Student's Data" << endl;
    cout << "2. Add 2nd Student's Data" << endl;
    cout << "3. Add 3rd Student's Data" << endl;
    cout << "4. View All Students Data (Tabular Form)" << endl;
    cout << "5. Exit" << endl
         << endl;
    cout << "Your Option: ";
    cin >> option;
    return option;
}
void header(int x, int y)
{
    system("color 0B");
    gotoxy(x, y);
    cout << "===========================================================";
    gotoxy(x, y += 1);
    cout << "| 88    88  888888 88888888     88     88      88  88888  |";
    gotoxy(x, y += 1);
    cout << "| 88    88  88        88        88     88 8  8 88 88      |";
    gotoxy(x, y += 1);
    cout << "| 88    88  8888      88        88     88  88  88   888   |";
    gotoxy(x, y += 1);
    cout << "| 88    88  88        88        88     88      88      88 |";
    gotoxy(x, y += 1);
    cout << "|  888888   888888    88        888888 88      88  88888  |";
    gotoxy(x, y += 1);
    cout << "===========================================================";
    cout << endl
         << endl;
}

void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}