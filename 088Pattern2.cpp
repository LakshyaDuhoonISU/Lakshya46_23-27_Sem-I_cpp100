// including required header files
#include <iostream>
using namespace std;

// main function
int main() {

    // input number of rows from the user
    int num;
    cout << "Enter the number: ";
    cin >> num;

    // printting pattern
    cout << endl << "The pattern with " << num << " rows is" << endl << endl;

    for (int i = 0; i < num; i++){
        for (int j = 0; j <= i; j++) {
            cout << j+1;
        }
        for (int k = i; k >= 1; k--){
            cout <<k;
        }
        cout << endl;
    }

    return 0;
}
