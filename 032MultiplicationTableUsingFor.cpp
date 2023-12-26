// inlcuding required header files
#include <iostream>
using namespace std;

int main() {
    // input numbers of multiplication number and multiplies
    int num;
    cout << "Enter the number: ";
    cin >> num;

    int range;
    cout << "Enter the range: ";
    cin >> range;

    // calculating and displaying the multiplication table a number till user given multiplies
    cout << endl << "The multiplication table of " << num << " till " << range << " is " << endl << endl;

    for (int i = 1; i <= range; i++) {
        cout << num << " x " << i << " = " << num * i << endl;
    }

    return 0;
}