// including required header files
#include <iostream>
using namespace std;

// recersion function to perform Tower of Hanoi algorithm
void towerOfHanoi(int n, string src, string aux, string dest) {
    if (n == 1) {
        cout << "Move disk - " << n << " from " << src << " to " << dest << endl;
        return;
    }
    towerOfHanoi(n-1, src, dest, aux);
    cout << "Move disk - " << n << " from " << src << " to " << dest << endl;
    towerOfHanoi(n-1, aux, src, dest);
}

// main function
int main() {

    // input a number for Tower of Hanoi algorithm
    int num;
    cout << "Enter number of disks: ";
    cin >> num;

    // Calling Tower of Hanoi function
    towerOfHanoi(num, "Tower 1", "Tower 2", "Tower 3");

    return 0;
}
