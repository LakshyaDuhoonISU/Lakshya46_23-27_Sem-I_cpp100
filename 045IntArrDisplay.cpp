//Define an array of integers and display its elements.
#include <iostream>
using namespace std;
int main() 
{
  int marks[5];
  cout << "Enter 5 students marks: " << endl;
  
  //  store input from user to array
  for (int i = 0; i < 5; ++i)
  {
    cin >> marks[i];
  }
   cout << "The marks are: ";
   
   //  print array elements
   for (int n = 0; n < 5; ++n) 
  {
    cout << marks[n] << "  ";
  }

  return 0;
}
