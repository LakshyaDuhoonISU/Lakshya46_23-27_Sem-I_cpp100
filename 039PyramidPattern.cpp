// including required header files
#include <iostream>
using namespace std;

// main function
int main() {
    // input a number from user
    int n;

    cout << "Enter the number of rows for the pyramid: ";
    cin >> n;

    // printting patterns
    for (int i = 1; i <= n; ++i) {

        for (int j = 1; j <= n - i; ++j) {
            cout << " ";
        }


        for (int k = 1; k <= 2 * i - 1; ++k) {
            cout << "*";
        }


        cout <<endl;
    }

    return 0;
}
