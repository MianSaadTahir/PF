#include <iostream>
using namespace std;

float pyramidVolume(float length, float width, float height, string unit);

main()
{
    float length, width, height, result;
    string unit;
    cout << "Enter the length of the pyramid (in meters): ";
    cin >> length;
    cout << "Enter the width of the pyramid (in meters): ";
    cin >> width;
    cout << "Enter the height of the pyramid (in meters): ";
    cin >> height;
    cout << "Enter the desired output unit (millimeters, centimeters, meters, kilometers): ";
    cin >> unit;
    result = pyramidVolume(length, width, height, unit);
    cout << "The volume of the pyramid is: " << to_string(result) << " cubic " << unit;
}

float pyramidVolume(float length, float width, float height, string unit)
{
    if (unit == "meters")
    {
        float result = (length * width * height) / 3;
        return result;
    }
    if (unit == "centimeters")
    {
        float a = (length * width * height) / 3;
        float result = a * 1000000;
        return result;
    }
    if (unit == "kilometers")
    {
        float a = (length * width * height) / 3;
        float result = a / 1000000000;
        return result;
    }
    if (unit == "millimeters")
    {
        float a = (length * width * height) / 3;
        float result = a * 100000000000;
        return result;
    }
}