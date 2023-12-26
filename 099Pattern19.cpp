// including required header files
#include <iostream>
using namespace std;

// main function
int main() {
    // input number of rows from uesr, initailzing the char to display in pattern
    int num;
    char displayChar;

    cout << "Enter the number of lines: ";
    cin >> num;

    // pritting pattern
    cout << endl << "The pattern with " << num << " rows is" << endl << endl ;

    displayChar = char(int('A') + num - 1);

    for (int i = num; i > 0; i--) {
        for (int j = 1; j <= i; j++) {
            cout << displayChar;
        }
        displayChar--;
        cout << endl;
    }

    return 0;
}
