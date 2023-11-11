#include <iostream>
using namespace std;

main()
{
   string a;
   cout << "Enter the argument 'a': ";
   getline(cin, a);
   string result = "something " + a;
   cout << "Result: " << result;
}