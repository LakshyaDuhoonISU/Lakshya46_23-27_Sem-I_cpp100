// including required header files
#include <iostream>
#include <string>

using namespace std;

// function to reverse string
void reverseString(string &str) {
    int start = 0;
    int end = str.length() - 1;

    while (start < end) {

        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }
}

// main function
int main() {
    // input the string from string
    string input;

    cout << "Enter a string: "<<endl;
    cin >> input;

    // calling function to reverse string and displaying it
    reverseString(input);

    cout << "Reversed string: " << input <<endl;

    return 0;
}
