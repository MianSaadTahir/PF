#include <iostream>
using namespace std;

void hospital(int days);

main()
{
    int days;
    cout << "Enter Number of days you visited Hospital: ";
    cin >> days;
    hospital(days);
}

void hospital(int days)
{
    int patients = 0, doctors = 7, untreatedPaitents = 0, treatedPaitents = 0;
    for (int i = 1; i <= days; i++)
    {
        cout << "Number of patients who visited hospital on Day " << i << ": ";
        cin >> patients;

        if (i % 3 == 0 && untreatedPaitents > treatedPaitents)
        {
            doctors++;
        }
        if (patients <= doctors)
        {
            treatedPaitents += patients;
        }
        else
        {
            treatedPaitents += doctors;
            untreatedPaitents += (patients - doctors);
        }
    }

    cout << "Treated Patients: " << treatedPaitents << endl;
    cout << "Untreated Patients: " << untreatedPaitents;
}
