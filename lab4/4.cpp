#include<iostream>
using namespace std;

void add ( int n1, int n2 );
void sub ( int n1, int n2 );
void multi ( int n1, int n2 );
void division ( int n1, int n2 );

main ()
{
	int n1, n2;
	char op;
	cout << "Enter 1st number: ";
	cin >> n1;
	cout << "Enter 2nd number: ";
	cin >> n2;
	cout << "Enter an operator (+, -, *, /): ";
	cin >> op;

if (op == '+')
	{
		add (  n1,  n2 );
	}
	
if (op == '-')
	{
		sub ( n1, n2 );
	}

if (op == '*')
	{
		multi ( n1, n2 );
	}

if (op == '/')
	{
		division ( n1, n2 );

	}

}

void add ( int n1, int n2 )
{
	cout << "Addition: " << n1 + n2;

}

void sub ( int n1, int n2 )
{
	cout << "Subtraction: " << n1 - n2;

}

void multi ( int n1, int n2 )
{
	cout << "Multiplication: " << n1 * n2;

}

void division ( int n1, int n2 )
{
	cout << "Division: " << n1 + n2;

}

