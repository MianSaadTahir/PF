#include<iostream>
using namespace std;

void calculateFuel ( float dist, int fuel );

main()
{
	float dist;
	int fuel;
	cout << "Enter the distance: ";
	cin >> dist;
	calculateFuel ( dist, fuel );

}

void calculateFuel ( float dist, int fuel )
{
	fuel = dist * 10;

if ( fuel < 100  )
	{
		cout << "Fuel needed: 100";
	}

if ( fuel > 100  )
	{
		cout << "Fuel needed: " << fuel;
	}


}