#include<iostream>
using namespace std;
int main()
{
	string name;
	int win,draw,loss;
	cout<<"Enter the name of the cricket team: ";
	cin>>name;
	cout<<"Enter the number of wins: ";
	cin>>win;
	cout<<"Enter the number of draws: ";
	cin>>draw;
	cout<<"Enter the number of losses: ";
	cin>>loss;
	int w,d,l,points;
	w=win*3;
	d=draw*1;
	l=loss*0;
	points=w+d+l;
	cout<<name<<" has obtained "<<points<<" points in the Asia Cup tournament.";
	



}