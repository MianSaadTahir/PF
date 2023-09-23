#include<iostream>
using namespace std;
int main()
{
	float m,b;
	cout<<"Enter the size in megabytes (MB): ";
	cin>>m;
	b=m*1024*1024*8;
	cout<<m<<" MB is equivalent to "<<b<<" bits.";
}