//Create a program to check if a number is prime using recursion.
#include <iostream>
using namespace std;
bool isPrime(int n, int i = 2)
{
    // Function to check if number is prime or not and returns true or false
    if (n <= 2) return (n == 2) ? true : false; if (n % i == 0) return false; if (i * i > n)
       return true;
    //check the number n with the next number after 2 and then after 3 and so on till i<n/2
    return isPrime(n, i + 1);
}

int main()
{
    int n;
    cout<<"Enter a number ";
    cin>>n;
    //if true is returned , no is prime
    if (isPrime(n))
       cout << "Prime Number";
    else
       cout << "Not a Prime";

    return 0;
}
