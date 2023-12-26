//c++ program to print reverse numbers in descending order
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of rows to print: ";
    cin>>n;
    //for printing each row
    for (int i=1;i<=n;i++)
    {
        //for printing numbers in descending order from n to i (eg- from 5 to 1 where n=5 and i=always 1)
        for(int j=n;j>=i;j--)
        {
            cout<<j;
        }
        //moving to next line after printing a row
        cout<<endl;
    }
    return 0;
}
