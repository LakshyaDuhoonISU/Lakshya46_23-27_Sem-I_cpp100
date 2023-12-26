// inlcuding required header files
#include <iostream>
using namespace std;

// main function
int main() {

    // input 2 numbers and choice of operation to perform on 2 numbers
    double num1, num2;
    int choice;

    cout << "Simple Calculator Menu:" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Rember" << endl;
    cout << "Enter your choice (1/2/3/4/5): ";
    cin >> choice;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    // calculating the selected operation of given 2 numbers
    switch (choice) {
        case 1:
            cout << "Result(" << num1 << " + " << num2 << ") is " << num1 + num2 << endl;

            break;
        case 2:
            cout << "Result(" << num1 << " - " << num2 << ") is " << num1 - num2 << endl;

            break;
        case 3:
            cout << "Result(" << num1 << " X " << num2 << ") is " << num1 * num2 << endl;

            break;
        case 4:
            if (num2 != 0) {
                cout << "Result(" << num1 << " / " << num2 << ") is " << num1 / num2 << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }

            break;
        case 5:
            if (num2 != 0) {
                cout << "Result(" << num1 << " % " << num2 << ") is " << int(num1) % int(num2) << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }

            break;
        default:
            cout << "Invalid choice! Please enter 1, 2, 3, or 4." << endl;
            break;
    }

    return 0;
}
