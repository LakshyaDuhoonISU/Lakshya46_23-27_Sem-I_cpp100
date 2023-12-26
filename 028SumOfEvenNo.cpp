//Create a program to find the sum of even numbers from 1 to N using a while loop.
#include <iostream>
using namespace std;
 
int main()
{
    int num, sum=0;
    cout<<"Enter any number: "<<endl;
    cin>>num;
    //i=2 because 2 is the first even number
    int i=2;
    //using while loop for addition of numbers
    while (i<=num)
    {
      sum += i;
     //incrementing by 2 to skip odd numbers in between 2 even numbers
      i+=2;  
    }
    cout<<"Sum of all even number between 1 to " << num << ": "<<sum;
    return 0;
}
