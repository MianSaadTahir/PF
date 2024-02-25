#include <iostream>
using namespace std;

string reverseWords(string sentence);

int main()
{
    string sentence;
    cout << "Enter a string: ";
    getline(cin >> ws, sentence);
    string result = reverseWords(sentence);
    cout << "Reversed string: " << result;
}

string reverseWords(string sentence)
{
    string word = "";
    string reversed = "";
    for (int i = sentence.length() - 1; i >= 0; i--)
    {
        if (sentence[i] == ' ')
        {
            reversed += word + " ";
            word = "";
        }
        else
        {
            word = sentence[i] + word;
        }
    }
    reversed += word;
    return reversed;
}