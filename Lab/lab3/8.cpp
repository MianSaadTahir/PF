#include<iostream>
using namespace std;
int main()
{
	float v,a,w;
	cout<<"Enter voltage (in volts): ";
	cin>>v;
	cout<<"Enter current (in amperes): ";
	cin>>a;
	w=a*v;
	cout<<"The power is "<<w<<" watts.";
}