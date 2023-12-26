// c++ program to print a descending star pattern
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of rows to print: ";
    cin >> n;
    // first for loop is used for telling how many rows to print (i starts from number given by user till it reaches 1)
    for (int i = n; i > 0; i--)
    {
        // second for loop is used for printing stars in each row (j prints as many stars as the value of i is)
        for (int j = 1; j <= i; j++)
        {
            cout << " * ";
        }
        // endl is used to go to next row after printing stars
        cout << endl;
    }
    return 0;
}
