// c++ program to print a play button style pattern
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of rows to print: ";
    cin >> n;
    //for printing upper half of pattern
    for (int i = 0; i <= n / 2; i++)
    {
        //for printing stars in increasing order
        for (int j = 0; j <= i; j++)
        {
            cout << " * ";
        }
        //moving to next row after printing pattern
        cout << endl;
    }
    //for printing lower half of pattern
    for (int i = n / 2; i > 0; i--)
    {
        //for printing stars in decreasing order
        for (int j = 0; j < i; j++)
        {
            cout << " * ";
        }
        //moving to next row after printing pattern
        cout << endl;
    }
    return 0;
}
