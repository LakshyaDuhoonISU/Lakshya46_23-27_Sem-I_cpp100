// including required header files
#include <iostream>
using namespace std;

// main function
int main() {
    // input number of rows from uesr, initailzing the char to display in pattern
    int num;
    char currentChar;

    cout << "Enter the number of lines: ";
    cin >> num;

    // pritting pattern
    cout << endl << "The pattern with " << num << " rows is" << endl << endl ;

    for (int i = 0; i < num; i++) {
        currentChar = 'A' + num - i - 1;

        for (int j = 0; j <= i; j++) {
            cout << currentChar;
            currentChar++;
        }

        cout << endl;
    }

    return 0;
}
