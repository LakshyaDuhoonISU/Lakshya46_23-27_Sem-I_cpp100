// c++ program to calculate factorial of a number using a nested loop
#include <iostream>
using namespace std;
int main()
{
    int n, fact = 1;
    cout << "Enter a number to find it's factorial: ";
    cin >> n;
    // check if number is greater than zero(as only positive numbers have factorial values)
    if (n < 0)
    {
        cout << "Invalid Number!" << endl;
    }
    else if (n==0)
    {
        cout << "Factorial of 0 is 1" << endl;
    }
    else
    {
        // loop from 1 to the number and multiply each number to the previous number n times
        for (int i = 1; i <= n; i++)
        {
            // store the result of multiplication of current number with previous number
            fact = fact * i;
        }
        cout << "Factorial of " << n << " is " << fact << endl;
    }
    return 0;
}
