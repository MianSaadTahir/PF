#include<iostream>
using namespace std;

void even_odd (int n);

main()
{
	int n;
	cout << "Enter a number: ";
	cin >> n;
	even_odd (n);
}

void even_odd (int n)
{
	if ( n%2==0 )
	{
		cout << "Number " << n << " is even";
	}

	if ( n%2==1 )
	{
		cout << "Number " << n << " is odd";
	}
	
}