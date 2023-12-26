//Create a program to calculate the factorial of a number using recursion.
#include<iostream>
using namespace std;
//creating a function for factorial with int n as parameter
int fact(int n)
{
    //if user enters 0 then return value of 1 (as 0! = 1)
    if (n == 0) {
        return 1;
    }
    //multiply n with n-1 value recursively till n > 0
    return n * fact(n-1);
}

int main()
{
    int n;
    cout<<"Enter the value of n ";
    cin>>n;
    //calling fact function with argument as n whose value is given by user
    cout << n << "! = " << fact(n);
    return 0;
}
