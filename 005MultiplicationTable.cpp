// Implement a program to print the multiplication table of a given number.
#include <iostream>
using namespace std;

int main()
{
    int i, j;
    cout << "enter a number to get multiple " << endl;
    cin >> i;
    for (j = 1;  j<= 10; j++) //for printing multiplication table from 1 to 10 of number i
    {
        cout << i << "*" << j << "=" << i * j << endl;
      
    }
    return 0;
}