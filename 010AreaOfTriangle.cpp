// Implement a program to calculate the area of a triangle given its base and height.
#include <iostream>
using namespace std;

int main()
{
    int h, b;
    cout << "Enter the height and base of the triangle: ";
    cin >> h >> b;
    double area = 0.5 * b * h; //calculating area using formula 0.5*base*height(which is given by user)
    cout <<"The area of the triangle is:"<<area<<endl;
 
    return 0;
}