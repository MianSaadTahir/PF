#include<iostream>
using namespace std;

void n(string name);

main()
{	while (true)
	{
	string name;
	cout << "Enter your name: ";
	cin >> name;
	n(name);
	}
}

void n(string name)
{
	if(name=="Kaka") 
	{
		while(true)
		{
			cout << "Kaka" << endl;
		}
	}


}

