// including required header files
#include <iostream>
using namespace std;

// main function
int main() {
    // input number of rows from the user
    int num;

    cout << "Enter the number of lines: ";
    cin >> num;

    // print the pattern
    cout << endl << "The pattern with " << num << " rows is" << endl << endl ;

    for (int i = 0; i < num; i++) {
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
