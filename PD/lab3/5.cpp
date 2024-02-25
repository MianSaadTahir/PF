#include<iostream>
using namespace std;
main()
{
	string name;
	int loss,days,time;
	cout<<"Enter the Name of the Person: ";
	cin>>name;
	cout<<"Enter the target weight loss in kilograms: ";
	cin>>loss;
	time=loss*15;
	cout<<name<<" will need "<<time<<" days to lose "<<loss<<" kg of weight by following the doctor's suggestions";
}