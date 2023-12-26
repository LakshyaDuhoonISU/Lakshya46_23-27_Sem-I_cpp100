// including required header files
#include <iostream>
using namespace std;

// recersion function to find the sum of N narutal numbers
int sumOfNaturalNumbers(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n + sumOfNaturalNumbers(n - 1);
    }
}

int main()
{
    // input a number from user
    int n;

    cout << "Enter a positive integer (n): ";
    cin >> n;

    // displaying the sum of N natural numbers calling the function
    if (n < 1)
    {
        cout << "Please enter a positive integer." << endl;
        return 1;
    }

    int sum = sumOfNaturalNumbers(n);
    cout << "Sum of natural numbers from 1 to " << n << " is: " << sum << endl;

    return 0;
}
