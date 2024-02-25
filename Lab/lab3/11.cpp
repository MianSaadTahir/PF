#include<iostream>
using namespace std;
int main()
{
	int pop;
	cout<<"Enter the current world population: ";
	cin>>pop;
	int month_birth;
	cout<<"Enter the monthly birth rate (number of births per month): ";
	cin>>month_birth;
	int decade_birth;
	decade_birth = month_birth*12*30;
	int decade_pop;
	decade_pop=decade_birth+pop;
	cout<<"The population in three decades will be: "<<decade_pop;
}
	
	