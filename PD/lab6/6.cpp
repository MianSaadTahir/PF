#include <iostream>
using namespace std;

string calculateStudioPrices(string month, int numberOfStays);
string calculateApartmentPrices(string month, int numberOfStays);

main()
{
    int numberOfStays;
    string month;
    string apartmentResult, studioResult;

    cout << "Enter the month (May, June, July, August, September, October): ";
    cin >> month;
    cout << "Enter the number of stays: ";
    cin >> numberOfStays;

    apartmentResult = calculateApartmentPrices(month, numberOfStays);
    cout << "Apartment: " << apartmentResult << "$." << endl;
    studioResult = calculateStudioPrices(month, numberOfStays);
    cout << "Studio: " << studioResult << "$.";
}
string calculateStudioPrices(string month, int numberOfStays)
{
    float studio;
    if (month == "May" || month == "October")
    {
        studio = 50;
        if (numberOfStays > 7 && numberOfStays <= 14)
        {
            studio = studio - (studio * 0.05);
        }
        else if (numberOfStays > 14)
        {
            studio = studio - (studio * 0.3);
        }
    }
    else if (month == "June" || month == "September")
    {
        studio = 75.20;
        if (numberOfStays > 14)
        {
            studio = studio - (studio * 0.2);
        }
    }
    else if (month == "July" || month == "August")
    {
        studio = 76;
    }
    return to_string(numberOfStays * studio);
}
string calculateApartmentPrices(string month, int numberOfStays)
{
    float apartment;
    if (month == "May" || month == "October")
    {
        apartment = 65;
    }
    else if (month == "June" || month == "September")
    {
        apartment = 68.70;
    }
    else if (month == "July" || month == "August")
    {
        apartment = 77;
    }
    if (numberOfStays > 14)
    {
        apartment = apartment - (apartment * 0.1);
    }
    return to_string(numberOfStays * apartment);
}
