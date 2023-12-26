// including required header files
#include <iostream>
using namespace std;

// main function
int main() {
    // input number of rows from uesr, initailzing the number to display in pattern
    int num, displayNum = 1;

    cout << "Enter the number of lines: ";
    cin >> num;

    // printting patterns
    cout << endl << "The pattern with " << num << " rows is" << endl << endl ;

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << displayNum;
            displayNum = displayNum ? 0 : 1;
        }
        cout << endl;
    }
    

}
