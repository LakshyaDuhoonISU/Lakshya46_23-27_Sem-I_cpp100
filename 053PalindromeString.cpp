// including required header files
#include <iostream>
#include <string>
using namespace std;

// main function
int main()
{
    // input string from user
    string str;

    cout << "Enter a string: ";
    cin >> str;

    // checking weather given a string is Palindrome or not
    string reversed = str;
    reverse(reversed.begin(), reversed.end());

    if (str == reversed)
    {
        cout << "\"" << str << "\" is a palindrome." << endl;
    }
    else
    {
        cout << "\"" << str << "\" is not a palindrome." << endl;
    }

    return 0;
}
