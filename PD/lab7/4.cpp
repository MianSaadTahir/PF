#include <iostream>
using namespace std;

int triangleDots(int triangle);

main()
{
    int triangle;
    cout << "Enter number of Triangle: ";
    cin >> triangle;
    cout << "Dots in the Triangle: " << triangleDots(triangle);
}

int triangleDots(int triangle)
{
    int sum = 0;
    for (int dots = 1; dots <= triangle; dots++)
    {
        sum = sum + dots;
    }
    return sum;
}
