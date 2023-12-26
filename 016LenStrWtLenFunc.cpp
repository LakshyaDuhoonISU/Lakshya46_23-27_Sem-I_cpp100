//program to find the length of string without using length function

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
   int i=0;
   int count=0;
   string characters; 

   cout<<"\nEnter any string :: ";
   getline (cin,characters) ; // using getline function to include all types of input and allow whitespaces

   //loop for counting all characters inside the string and finding its length
   for(i=0; characters[i]; i++)
   {
        count++;
   }
   cout<<"\nLength of String [ "<<characters<<" ] is :: "<<count<<"\n";
}
