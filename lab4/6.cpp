#include<iostream>
using namespace std;

void pass_fail ( int score );

main()
{
	int score;
	cout << "Enter your score: ";
	cin >> score;
	pass_fail (score);

}

void pass_fail ( int score )
{

	if ( score > 50 )
		{
			cout << "Pass";
		}

	if ( score <= 50 )
		{
			cout << "Fail";
		}

}