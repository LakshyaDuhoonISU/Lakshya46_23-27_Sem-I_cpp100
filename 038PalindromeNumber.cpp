// including required header files
#include <iostream>
using namespace std;

// main function
int main() {
    // input a number from user
    int num, reversedNum = 0, originalNum, remainder;

    cout << "Enter a number: ";
    cin >> num;

    originalNum = num;

    // reversing the number
    while (num > 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    // checking weather the number is palindrome or not
    if (originalNum == reversedNum) {
        cout << originalNum << " is a palindrome." <<endl;
    } else {
        cout << originalNum << " is not a palindrome." <<endl;
    }

return 0;
}
