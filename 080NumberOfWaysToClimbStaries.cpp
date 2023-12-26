// including required header files
#include <iostream>
using namespace std;

// function to count the number of ways
int countWays(int* steps, int numSteps, int n) {
    if (n < 0) {
        return 0;
    } else if (n == 0) {
        return 1;
    }

    int ways = 0;

    for (int i = 0; i < numSteps; ++i) {
        ways += countWays(steps, numSteps, n - steps[i]);
    }

    return ways;
}

// main function
int main() {
    // input a number of staries, number of step sizes and number of step sizes from the user
    int num;
    cout << "Enter the number of stairs: ";
    cin >> num;

    int numSteps;
    cout << "Enter the number of different step sizes: ";
    cin >> numSteps;

    int steps[numSteps];

    cout << "Enter the step sizes " << endl;
    for (int i = 0; i < numSteps; ++i) {
        cout << "Enter " << i+1 << "th step size: ";
        cin >> steps[i];
    }

    // displaying the number to the climd staries by calling a countWays funciton
    cout << "Number of ways to climb the stairs: " << countWays(steps, numSteps, num) << endl;

    return 0;
}
