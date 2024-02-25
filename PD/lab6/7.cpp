#include <iostream>
using namespace std;

void checkStudentStatus(int examHour, int examMinute, int studentHour, int studentMinute);

main()
{
    int studentHour, studentMinute, examHour, examMinute;
    cout << "Enter Exam Starting Time (hour): ";
    cin >> examHour;
    cout << "Enter Exam Starting Time (minutes): ";
    cin >> examMinute;
    cout << "Enter Student hour of arrival: ";
    cin >> studentHour;
    cout << "Enter Student minutes of arrival: ";
    cin >> studentMinute;
    checkStudentStatus(studentHour, studentMinute, examHour, examMinute);
}

void checkStudentStatus(int studentHour, int studentMinute, int examHour, int examMinute)
{
    int hour, Time, minute, arrivalTime, examTime;

    arrivalTime = (studentHour * 60) + studentMinute;
    examTime = (examHour * 60) + examMinute;
    if (arrivalTime < examTime && (examHour < 24 && studentHour < 24))
    {
        if ((examTime - arrivalTime) <= 59 && (examTime - arrivalTime) > 30)
        {
            cout << "Early" << endl;
            cout << examTime - arrivalTime << " minutes before the start";
        }
        else if ((examTime - arrivalTime) <= 30)
        {
            cout << "On time" << endl;
            cout << examTime - arrivalTime << " minutes before the start";
        }
        else if ((examTime - arrivalTime) > 59)
        {
            Time = examTime - arrivalTime;
            hour = Time / 60;
            minute = Time % 60;
            cout << "Early" << endl;
            if (minute >= 1 && minute <= 9)
            {
                cout << hour << ":0" << minute << " hours before the start";
            }
            else if (minute >= 10 || minute == 0)
            {
                cout << hour << ":" << minute << " hours before the start";
            }
        }
    }

    else if (arrivalTime > examTime && (examHour < 24 && studentHour < 24))
    {
        if ((arrivalTime - examTime) <= 59)
        {
            cout << "Late" << endl;
            cout << arrivalTime - examTime << " minutes after the start";
        }
        else if ((arrivalTime - examTime) > 59)
        {
            Time = arrivalTime - examTime;
            hour = Time / 60;
            minute = Time % 60;
            cout << "Late" << endl;
            if (minute >= 1 && minute <= 9)
            {
                cout << hour << ":0" << minute << " hours before the start";
            }
            else if (minute >= 10 || minute == 0)
            {
                cout << hour << ":" << minute << " hours after the start";
            }
        }
    }
    else if (arrivalTime == examTime)
    {
        cout << "On time";
    }
}