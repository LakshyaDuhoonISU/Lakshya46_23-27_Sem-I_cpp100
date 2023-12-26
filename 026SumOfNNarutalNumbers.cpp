// inlcuding required header files
#include <iostream>
using namespace std;

// main function
int main() {

    // input a number and initilizing the variables
    int num, sum = 0, i = 1;
    cout << "Enter a number (between 1 and infinity): ";
    cin >> num;

    while (num <= 0) {
        cout << "Enter a number (between 1 and infinity): ";
        cin >> num;
    }

    // calculating and displaying the sum of N natural numbers
    cout << "The sum of " << num << " natural numbers: " << endl;

    while (i <= num) {
        sum += i;
        if (i < num) {
            cout << i << " + ";
        } else {
            cout << i << " = ";
        }
        i++;
    }

    cout << sum << endl;

    return 0;
}
