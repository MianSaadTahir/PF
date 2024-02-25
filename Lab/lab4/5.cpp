#include<iostream>
using namespace std;

void eligiblity ( int age );

main()
{
	int age;
	cout << "Enter your age: ";
	cin >> age;
	eligiblity ( age );
}

void eligiblity ( int age )
{
	if ( age >= 18 )
		{
			cout << "You are eligible to vote.";
		}
	
	if ( age < 18 )
		{
			cout << "You are not eligible to vote.";
	
		}
}