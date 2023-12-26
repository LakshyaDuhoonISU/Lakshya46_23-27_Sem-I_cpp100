// Write a program to find the sum of all numbers from 1 to N using a loop.

#include <iostream>
using namespace std;

int main()
{
    int n ,sum =0  ;
    cout << "enter a number";
    cin>>n;
    
    for (int i = 1; i <= n; i++)//Loop from 1 to 'n
    {
        sum += i;//Add 'i' to 'sum' in each iteration
    }
    cout<<" = "<<sum<<endl;
}