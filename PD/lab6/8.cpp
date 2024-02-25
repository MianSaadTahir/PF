#include <iostream>
#include <cmath>
using namespace std;

float calculateVolleyballGames(string yearType, int holidays, int hometownWeekends);
main()
{
    int holidays, hometownWeekends;
    string yearType;

    cout << "Enter year type: ";
    cin >> yearType;
    cout << "Enter number of holidays: ";
    cin >> holidays;
    cout << "Enter number of weekends: ";
    cin >> hometownWeekends;
    float result = calculateVolleyballGames(yearType, holidays, hometownWeekends);
    cout << ceil(result);
}

float calculateVolleyballGames(string yearType, int holidays, int hometownWeekends)
{
    float sofiaWeekends, Freeweekend, playHoliday, playSunday, totalPlayDays;

    sofiaWeekends = 48 - hometownWeekends;
    Freeweekend = sofiaWeekends * 0.75;
    playSunday = hometownWeekends;
    playHoliday = (2 * holidays) / 3;
    totalPlayDays = Freeweekend + playHoliday + playSunday;
    if (yearType == "leap")
    {
        totalPlayDays = totalPlayDays + (totalPlayDays * 0.15);
    }
    return totalPlayDays;
}
