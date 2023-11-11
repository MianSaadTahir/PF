#include <iostream>
using namespace std;

bool canPayWithChange(double change[], double totalDue);

main()
{
  double change[4], totalDue;

  cout << "Enter quarters: ";
  cin >> change[0];
  cout << "Enter dimes: ";
  cin >> change[1];
  cout << "Enter nickels: ";
  cin >> change[2];
  cout << "Enter pennies: ";
  cin >> change[3];

  cout << "Enter the total amount due: $";
  cin >> totalDue;
  cout << "Can you pay the amount? ";

  if (canPayWithChange(change, totalDue))
  {
    cout << "Yes";
  }
  else
  {
    cout << "No";
  }
}

bool canPayWithChange(double change[], double totalDue)
{
  change[0] *= 0.25;
  change[1] *= 0.10;
  change[2] *= 0.05;
  change[3] *= 0.01;
  double totalChange = change[0] + change[1] + change[2] + change[3];
  if (totalChange >= totalDue)
  {
    return true;
  }
  else
  {
    return false;
  }
}