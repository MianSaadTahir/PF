#include<iostream>
using namespace std;
main()
{
	int bag,cost_of_bag,area,cost_per_pound,cost_per_area;
	cout<<"Enter the size of the fertilizer bag in pounds: ";
	cin>>bag;
	cout<<"Enter the cost of the bag: $";
	cin>>cost_of_bag;
	cout<<"Enter the area in square feet that can be covered by the bag: ";
	cin>>area;
	cost_per_pound=cost_of_bag/bag;
	cost_per_area=cost_of_bag/area;
	cout<<"Cost of fertilizer per pound: $"<<cost_per_pound<<endl;
	cout<<"Cost of fertilizing per square foot: $"<<cost_per_area;
}