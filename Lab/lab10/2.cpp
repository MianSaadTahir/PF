#include <iostream>
using namespace std;

string reverseString(string word);

main()
{
    string word;
    cout << "Enter a string: ";
    cin >> word;
    string result = reverseString(word);
    cout << "Reversed String: " << result;
}
string reverseString(string word)
{
    string reverse = "";
    for (int x = word.length() - 1; x >= 0; x--)
    {
        reverse += word[x];
    }
    return reverse;
}