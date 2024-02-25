#include<iostream>
using namespace std;

void calculatePayableAmount ( string day, int amount );

main()
{
while(true)
{	string day;
	int amount;
	cout << "Enter the day of purchase: ";
	cin >> day;
	cout << "Enter the total purchase amount: $";
	cin >> amount;
	calculatePayableAmount (  day,  amount );
}
}

void calculatePayableAmount ( string day, int amount )
{
	int discount, a, b, not_sunday_discount;
	a = amount * 0.1;
	discount = amount - a;
	b = amount * 0.05;
	not_sunday_discount = amount - b;

if ( day == "Sunday" )
	{
		cout << "Payable Amount: $" << discount << endl;
	}
if ( day != "Sunday" )
	{
		cout << "Payable Amount: $" << not_sunday_discount << endl;
	}

}
