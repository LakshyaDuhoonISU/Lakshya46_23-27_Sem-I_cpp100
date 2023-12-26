//c++ program to reverse an array in place
#include <iostream>
using namespace std;

int main() 
{
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;


    if (n <= 0)
    {
        cout << "Invalid array size. Please enter a positive integer." << endl;
        return 1; // Exit with an error code
    }

    int arr[n];

    // Input elements into the array
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }

    // Display the elements of the array
    cout << "Elements in the array: |";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<"|";
    cout << endl;

    // Reverse the array in-place
    int start = 0;
    int end = n - 1;

    while (start < end) 
    {
        // Swap arr[start] and arr[end]
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move start and end pointers towards the center
        start++;
        end--;
    }

    // Display the reversed array
    cout << "Reversed Array: |";
    for (int i = 0; i < n; i++) 
    {
        cout << arr[i] << " ";
    }
    cout << "|"<<endl;

    return 0;
}
