#include<iostream>
using namespace std;
void inch_to_feet( float inch , float feet );

main()
{
	float a, b;
	cout << "Enter the measurement in inches: ";
	cin >> a;	
	inch_to_feet ( a , b );
}

void inch_to_feet( float inch , float feet )
{
	feet = inch / 12;
	cout << "Equivalent in feet: " << feet;
}
