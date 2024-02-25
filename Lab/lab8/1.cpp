#include <iostream>
using namespace std;

bool doesBrickFit(int heightB, int widthB, int depthB, int widthH, int heightH);

main()
{
    int heightB, widthB, depthB, widthH, heightH;
    cout << "Enter height of brick: ";
    cin >> heightB;
    cout << "Enter width of brick: ";
    cin >> widthB;
    cout << "Enter depth of brick: ";
    cin >> depthB;
    cout << "Enter height of hole: ";
    cin >> heightH;
    cout << "Enter width of hole: ";
    cin >> widthH;
    bool result = doesBrickFit(heightB, widthB, depthB, widthH, heightH);
    cout << result;
}
bool doesBrickFit(int heightB, int widthB, int depthB, int widthH, int heightH)
{
    if (heightB == heightH && widthB == widthH)
    {
        return true;
    }
    else if (heightB == widthH && widthB == heightH)
    {
        return true;
    }
    else if (heightB == heightH && depthB == widthH)
    {
        return true;
    }
    else if (heightB == widthH && depthB == heightH)
    {
        return true;
    }
    else if (widthB == heightH && depthB == widthH)
    {
        return true;
    }
    else if (widthB == widthH && depthB == heightH)
    {
        return true;
    }
    else
    {
        return false;
    }
}