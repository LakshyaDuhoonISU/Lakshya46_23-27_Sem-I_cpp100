//Calculate the sum of digits of a number using a do-while loop.
#include <iostream>  
using namespace std;  
int main()  
{  
int n,sum=0,m;    
cout<<"Enter a number: ";    
cin>>n;  
//using do while loop  
//taking out last digit of the number and adding it to the sum variable and updating value of n without the last digit
do{m=n%10;    
sum=sum+m;    
n=n/10; 
} 
//doing this loop till n is not empty
while(n>0);      
cout<<"Sum is = "<<sum<<endl;    
return 0;  
}  
