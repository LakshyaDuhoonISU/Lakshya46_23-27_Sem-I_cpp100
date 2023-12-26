// including required header files
#include <iostream>
using namespace std;

// function to check power a number
double power(double base, int exponent)
{
    if (exponent == 0)
    {
        return 1.0;
    }
    else if (exponent < 0)
    {

        return 1.0 / (base * power(base, -exponent - 1));
    }
    else
    {
        return base * power(base, exponent - 1);
    }
}

// main function
int main()
{
    // input base and exponent from user
    double base;
    int exponent;

    cout << "Enter the base: ";
    cin >> base;
    cout << "Enter the exponent: ";
    cin >> exponent;

    // displaying the result
    double result = power(base, exponent);
    cout << base << " ^ " << exponent << " = " << result << endl;

    return 0;
}
