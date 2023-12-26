// c++ program to calculate average of elements in an array
#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Invalid array size. Please enter a positive integer." << endl;
        return 1; // Exit with an error code
    }
    
    int arr[n];

    // Input elements into the array
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Display the elements of the array
    cout << "Elements in the array: |";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "|";
    cout << endl;

    // Calculate the sum of elements in the array
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    // Calculate the average of the elements in the array (sum of elements divided by number of elements) and print it
    int avg = sum / n;
    cout << "Average of elements in the array: " << avg << endl;
    return 0;
}
