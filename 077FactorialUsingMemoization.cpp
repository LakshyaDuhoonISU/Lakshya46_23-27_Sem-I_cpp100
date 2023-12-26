// including required header files
#include <iostream>
using namespace std;

// initializing memo array
int arr[] = {};

// function to factorial using memo array
int fact(int n) {
    if (n >= 0) {
        arr[0] = 1;
        for (int i = 1; i <= n; ++i) {
            arr[i] = i * arr[i - 1];
        }
        return arr[n];
    }
    return 1;
}

// main function
int main() {
    // input a number from user
    int num;
    cout << "Enter number: ";
    cin >> num;

    // calling and displaying the factorial of a number using fact function
    cout << "The factorial of " << num << " is " << fact(num) << endl;
    return 0;
}