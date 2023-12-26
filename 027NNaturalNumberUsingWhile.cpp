// including header files
#include <iostream>
using namespace std;

// main function
int main() {

    // input a number and initlizing thr iterators
    int N, i = 1;
    cout << "Enter a number (between 1 and infinity): ";
    cin >> N;

    while (N <= 0) {
        cout << "Enter a number (between 1 and infinity): ";
        cin >> N;
    }

    // displaying all N natural numbers
    cout << "All natural numbers string from 1 to " << N << " are " << endl; 

    while (i <= N) {
        cout << i << endl;
        i++;
    }

    return 0;
}
