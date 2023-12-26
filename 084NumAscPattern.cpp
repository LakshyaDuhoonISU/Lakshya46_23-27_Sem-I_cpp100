// c++ program to print rows of numbers in ascending order
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of rows to print: ";
    cin >> n;
    // for printing as many rows as the user specified
    for (int i = 1; i <= n; i++)
    {
        // used for telling how many times to print value of i in each row
        //  for printing value of i in each row (eg-on row 4, it should print value of i 4 times, 3 times on row 3, 2 times on row 2 and so on)
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        // moving to next line after printing  
        cout << endl;
    }
    return 0;
}
