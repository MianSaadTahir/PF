#include <iostream>
using namespace std;

int volumeOFboxes(int dimensionsOFboxes[], int dimensions);

main()
{
    int boxes, dimensions;
    cout << "Enter the number of boxes: ";
    cin >> boxes;
    dimensions = boxes * 3;
    int dimensionsOFboxes[dimensions];
    cout << "Enter the dimensions of the boxes (length, width, height): " << endl;
    for (int i = 0; i < dimensions; i++)
    {
        cin >> dimensionsOFboxes[i];
    }
    int result = volumeOFboxes(dimensionsOFboxes, dimensions);
    cout << "Total volume of all boxes: " << result;
}

int volumeOFboxes(int dimensionsOFboxes[], int dimensions)
{
    int product = 0;
    for (int i = 0; i < dimensions; i += 3)
    {
        product += dimensionsOFboxes[i] * dimensionsOFboxes[i + 1] * dimensionsOFboxes[i + 2];
    }
    return product;
}