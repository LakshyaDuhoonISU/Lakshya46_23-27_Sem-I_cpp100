//c++ program to find sum of main diagonal of a 2d array
#include <iostream>
using namespace std;

int main() 
{
    int n,sum=0;
    cout << "Enter the size of the square 2D array: ";
    cin >> n;

    int arr[n][n];

    if (n <= 0)
    {
        cout << "Invalid array size. Please enter a positive integer." << endl;
        return 1; // Exit with an error code
    }

    // Input elements into the 2D array
    cout << "Enter the elements of the 2D array:" << endl;
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            cin >> arr[i][j];
        }
    }

    // Display the 2D array
    cout << "2D Array:" << endl;
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            cout <<" | " << arr[i][j] << " | ";
        }
        cout << endl; // Move to the next row
    }

    // Calculate the sum of elements in the main diagonal
    for (int i = 0; i < n; i++) 
    {
        sum = sum + arr[i][i];
    }

    cout << "Sum of elements in the main diagonal: " << sum << endl;

    return 0;
}
