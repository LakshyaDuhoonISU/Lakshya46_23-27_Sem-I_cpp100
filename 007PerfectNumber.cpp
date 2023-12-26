//program to check whether a given number is a perfect number
#include <iostream>
using namespace std;

int main()
{
    int num, sum = 0; // Declare variables for the input number and the sum of divisors
    cout << "Enter number: "; // Prompt the user to enter a number
    cin >> num; // Read the input number from the user

    if (num > 0) { // Check if the input number is positive
        for (int i = 1; i < num; i++) { // Iterate through numbers from 1 to (num - 1)
            if (num % i == 0) { // Check if 'num' is divisible by 'i'
                sum = sum + i; // If divisible, add 'i' to the sum of divisors
            }
        }
        if (num == sum) { // Check if the sum of divisors equals the input number
            cout << num << " is a perfect number" << endl; // If true, it's a perfect number
        } else {
            cout << num << " is not a perfect number" << endl; // If not true, it's not a perfect number
        }
    } else {
        cout << num << " is not a perfect number" << endl; // If the input is not positive, it's not a perfect number
    }

    return 0; // Return 0 to indicate successful execution
}
