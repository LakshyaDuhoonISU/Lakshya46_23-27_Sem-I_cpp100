// including the required headers files
#include <iostream>
using namespace std;

// main function
int main() {

    // input a number from user
    int n;
    cout << "Enter the number of lines: ";
    cin >> n;

    // printting pattern
    cout << endl << "The pattern with " << n << " rows is" << endl << endl ;

    for (int i = 0; i < n; i++){
        for (int j = n; j > i; j--) {
            cout << " ";
        }
        for (int k = 0; k < 2*i + 1; k++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}