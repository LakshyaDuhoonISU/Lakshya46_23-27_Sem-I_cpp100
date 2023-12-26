//Create a program to check if a character is a vowel or consonant.
#include<iostream>
using namespace std;
int main()
{
char c;
cout<<"Enter a character ";
cin>>c;
//checks if the user given letter is a vowel(a,e,i,o,u,A,E,I,O,U) or not
if (c =='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U')
{
    cout<<c<< " is a vowel";
}
else{ 
    cout<<c<<" is a consonant";
}
return 0;
}
