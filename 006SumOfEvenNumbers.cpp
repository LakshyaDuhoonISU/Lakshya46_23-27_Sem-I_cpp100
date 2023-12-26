//Calculate the sum of all even numbers between 1 and N.
#include<iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int sum = 0;
    for (int i = 1; i <= N; i++) {
        if (i % 2 == 0) { //for adding even numbers from 1 to N by adding numbers which are divisible by 2
            sum += i;   //eg- initial 5 then i has a value of 3 the value of sum will be 5 + 3 = 8
        }
    }
    cout << sum << endl;
    return 0;
}