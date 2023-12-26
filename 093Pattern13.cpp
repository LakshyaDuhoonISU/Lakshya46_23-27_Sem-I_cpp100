// including required header files
#include <iostream>
using namespace std;

// main function
int main() {
    // input the number of rows, initailizing the varialbels
    int num;
    char displayChar = 'A';

    cout << "Enter the number of lines: ";
    cin >> num;

    // printting pattern
    cout << endl << "The pattern with " << num << " rows is" << endl << endl ;

    for (int i = 1; i < num; i++) {
        for (int j = 1; j <= i; j++) {
            cout << displayChar << " ";
            displayChar++;
        }
        cout << endl;
    }

    return 0;
}
