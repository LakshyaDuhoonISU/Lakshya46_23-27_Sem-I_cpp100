// c++ program to define an array of char and show length of string
#include <iostream>
using namespace std;
int main()
{
    char arr[] = {};
    cout << "Enter a string: ";
    cin >> arr;
    int length = 0; // Initialize length to 0
    // Manually count the characters until the null character is encountered(like whitespace)
    while (arr[length] != '\0')
    {
        // checking each index of the array arr for null character
        length++;
    }
    cout << "Length of string: " << length << endl;
    return 0;
}
