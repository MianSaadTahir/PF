#include<iostream>
using namespace std;
main()

{
	int square, width, height, paint_walls;

	cout << "Number of square meters you can paint: ";
	cin >> square;
	cout << "Width of the single wall (in meters): ";
	cin >> width;
	cout << "Height of the single wall (in meters): ";
	cin >> height;

		paint_walls = square / ( width * height );

	cout << "Number of walls you can paint: " << paint_walls;
}