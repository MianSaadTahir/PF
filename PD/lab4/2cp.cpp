#include <iostream>
using namespace std;

void true_false ( string a );

main()
{
    string a;
    cout<<"Enter 'true' or 'false': ";
    cin>>a;
    true_false ( a );
}

void true_false ( string a )
{
    if ( a=="true" )
    {
        cout<<"false";
    }
    
    if ( a=="false" )
    {
        cout<<"true";
    }
}