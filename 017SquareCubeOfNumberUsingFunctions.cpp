// including required header files
#include <iostream>
using namespace std;

// function to find square of number
double squareOfNum(double n) {
    return n * n;
}

// function to find cube of number
double cubeOfNum(double n) {
    return n * n * n;
}

// main function
int main() {

    // input a number from user
    double num;
    cout << "Enter a number: ";
    cin >> num;

    // displaying the square and cube of a number
    cout << "Square of " << num << " is (" << num << "^2): " << squareOfNum(num) << endl;
    cout << "Cube of " << num << " is (" << num << "^3): " << cubeOfNum(num) << endl;

    return 0;
}
