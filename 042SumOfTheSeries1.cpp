// including required header files
#include <iostream>
#include <iomanip>
using namespace std;

// main function
int main() {

    // initializing the variables and input a number
    int n;
    double sum = 0.0;
    cout << "Enter number: ";
    cin >> n;

    // calculating the sum of the series
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1) {
            if (i < n){
                cout << "1/" << i << " - ";
            } else {
                cout << "1/" << i << " = ";
            }
            sum += 1.0 / i;
        }
        else {
            if (i < n){
                cout << "1/" << i << " + ";
            } else {
                cout << "1/" << i << " = ";
            }
            sum -= 1.0 / i;
        }
    }

    // displaying the sum of the series
    cout << setprecision(3) << sum << endl;

    return 0;
}
