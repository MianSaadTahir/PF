#include<iostream>
using namespace std;
void fuel ( float dist, float fuel_req );

main()
{
	float dist, fuel_req;
	cout << "Enter the distance: ";
	cin >> dist;
	fuel( dist , fuel_req );
}

void fuel ( float dist, float fuel_req )
{

	fuel_req = dist * 10;
	cout << "Fuel needed: " << fuel_req;
}
