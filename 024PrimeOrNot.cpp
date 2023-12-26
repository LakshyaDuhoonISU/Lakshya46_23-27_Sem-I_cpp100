//Write a C++ program to check if a number is prime or composite.
#include <iostream>  
using namespace std;  
int main()  
{  
  int n, i,flag=0;  
  cout << "Enter the Number to check Prime: ";  
  cin >> n;  
  //if user gave 0 or 1, then print it is neither a prime or composite
  if (n==1 || n==0){
  cout<<n<<" neither prime nor composite"<<endl;
  }
  else {

  //checking whether the number is divisible by any number between 2 and n/2(if there any factors of the number, it will be in the range 2 and n/2)
  for(i = 2; i <= n/2; i++)  
  {  
      //if number is divisible, its not a prime no and update value of flag to 1
      if(n % i == 0)  
      {  
          cout<<"Number is not Prime."<<endl;  
          flag=1;  
          break;  
      }  
  } 
  //if no is not divisible, then value of flag will remain unchanged and is used to check if the number is prime or not
  if (flag==0) {
      cout << "Number is Prime."<<endl;  
  }
}
  
  return 0;  
}
