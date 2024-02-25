#include <iostream>
using namespace std;

void pet(int holidays);

main()
{
    int holidays;

    cout << "Holidays: ";
    cin >> holidays;
    pet(holidays);
}

void pet(int holidays)
{
    int workDays, gamesTime, diff, gamesTime_inHrs, gamesTime_inMin;

    workDays = 365 - holidays;
    gamesTime = workDays * 63 + holidays * 127;
    diff = 30000 - gamesTime;
    gamesTime_inHrs = diff / 60;
    gamesTime_inMin = diff - (gamesTime_inHrs * 60);

    if (diff >= 0)
    {
        cout << "Tom sleeps well" << endl;
        cout << gamesTime_inHrs << " hours and " << gamesTime_inMin << " minutes less for play";
    }
    else
    {
        gamesTime_inHrs = gamesTime_inHrs * -1;
        gamesTime_inMin = gamesTime_inMin * -1;
        cout << "Tom will run away" << endl;
        cout << gamesTime_inHrs << " hours and " << gamesTime_inMin << " minutes for play";
    }
}