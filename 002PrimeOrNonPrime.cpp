// Implement a program to check if a given number is prime or not.
#include <iostream>
using namespace std;

int n, a = 0;
int main()
{
    cout << "enter a number to check prime:  ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)//Check if 'n' is divisible by 'i' and  % checks if remainder is left
        {
            a = a + 1;
        }
    }

    if (a > 2) //prints messages if n is prime or not
    {
        cout << "not  prime";
    }
    else
    {
        cout << "number is prime";
    }

    return 0;
}
