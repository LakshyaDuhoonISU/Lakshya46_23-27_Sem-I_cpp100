// c++ program to calculate product of digits of a number using while loop
#include <iostream>
using namespace std;
int main()
{
    int n, a, remainder, product = 1;
    cout << "Enter a number: ";
    cin >> n;
    // stored the value of n(which is given by user) to another variable a to display the number later
    a = n;
    // while loop to calculate the product till the number is not empty
    while (n != 0)
    {
        // storing the last digit of the number into a variable remainder(eg- storing 4 from 1234)
        remainder = n % 10;
        // multiplying the remainder by the value insider product and then storing the result in the product variable for further multiplication
        product = product * remainder;
        // removing the last digit of the number(eg- removing 4 from 1234 so when loop runs again the value of n is 123)
        n = n / 10;
    }
    // displaying the original number using another variable a as n's value is 0 due to while loop
    cout << "Product of digits of the number " << a << " is: " << product << endl;
    return 0;
}
