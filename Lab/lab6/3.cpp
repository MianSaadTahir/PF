#include <iostream>
using namespace std;

float perimeter(char shape, float num);

main()
{
    float num;
    char shape;
    cout << "Enter the shape (s for square, c for circle, t for triangle, h for hexagon): ";
    cin >> shape;
    cout << "Enter the value: ";
    cin >> num;
    float result = perimeter(shape, num);
    cout << "The perimeter is: " << result;
}
float perimeter(char shape, float num)
{
    if (shape == 's')
    {
        float perimeter = num * 4;
        return perimeter;
    }
    if (shape == 'c')
    {
        float perimeter = num * 6.28;
        return perimeter;
    }
    if (shape == 't')
    {
        float perimeter = num * 3;
        return perimeter;
    }
    if (shape == 'h')
    {
        float perimeter = num * 6;
        return perimeter;
    }
}