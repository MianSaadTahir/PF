#include<iostream>
using namespace std;
void sticker ( int n );

main()
{
	int n;
	cout << "Enter the side length of the Rubik's Cube: ";
	cin >> n;
	sticker ( n );

}

void sticker ( int n )
{
	int stickers_needed;
	stickers_needed = 6 * n * n;
	cout << "Number of stickers needed: " << stickers_needed;

}