// c++ program to reverse a number using while loop
#include <iostream>
using namespace std;
int main()
{
    int n, remainder, reverseNo = 0;
    cout << "Enter a number: ";
    cin >> n;
    while (n != 0)
    {
        // remainder stores the last value of n (if n=1234, then remainder is 4 and so on...)
        remainder = n % 10;
        // reverseNo stores the last value of n and is multiplied by 10 to shift the last digit of reverseNo to left side so the next number can be put in variable(if remainder=4, then reverseNo=0*10+4=4 and so on...)
        reverseNo = reverseNo * 10 + remainder;
        // value of n is changed to quotient of division of n with 10 to remove the last digit (if n=1234, then 1234/10=123[as 123.4 is invalid in int and only 123 is considered])
        n = n / 10;
    }
    cout << "The reversed number is: " << reverseNo << endl;
    return 0;
}
