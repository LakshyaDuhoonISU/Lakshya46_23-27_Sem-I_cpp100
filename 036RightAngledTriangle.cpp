// including required header files
#include <iostream>
using namespace std;

// main function
int main() {
    // input number of rows
    int n;

    cout << "Enter the number of rows for the right-angled triangle: "<<endl;
    cin >> n;

    // printting pattern
    for (int i = 1; i <= n; ++i) {

        for (int j = 1; j <= i; ++j) {
            cout << "* ";
        }

        cout << std::endl;
    }

    return 0;
}
