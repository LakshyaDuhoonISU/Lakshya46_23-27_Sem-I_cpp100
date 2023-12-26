// c++ program to print numbers in pyramidal shape in ascending order
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of rows to print: ";
    cin >> n;
    // this loop controls the number of rows to print(from 1 to n)
    for (int i = 1; i <= n; i++)
    {
        // this loop print numbers from 1 to the number of rows "i" in each row
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        // used to move to next line after printing numbers in a row
        cout << endl;
    }
    return 0;
}
