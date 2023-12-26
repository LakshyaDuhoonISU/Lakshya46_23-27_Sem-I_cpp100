// c++ program to print a number pattern in decreasing pyramidal shape
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of rows to print: ";
    cin >> n;
    // for printing n number of rows
    for (int i = n; i > 0; i--)
    {
        // for printing numbers from 1 to i in each row
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        // for moving on to next row after printing numbers
        cout << endl;
    }
    return 0;
}
