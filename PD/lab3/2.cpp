#include<iostream>
using namespace std;
main()
{
	int min,sec,frame;
	cout<<"Number of Minutes: ";
	cin>>min;
	cout<<"Frames per Second: ";
	cin>>sec;
	frame=min*sec*60;
	cout<<"Total Number of Frames: "<<frame;
}