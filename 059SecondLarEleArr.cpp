// c++ program to find second largest element in an array
#include <iostream>
using namespace std;

int main()
{
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;


    if (size <= 0)
    {
        cout << "Invalid array size. Please enter a positive integer." << endl;
        return 1; // Exit with an error code
    }

    int arr[size];

    // Input elements into the array
    cout << "Enter elements of the array(>0):" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
        if (arr[i]<=0)
        {
            cout << "Invalid number. Please enter a positive integer.";
            return 1; //Exit with an error code
    }
    // if an array is made of only one element return with an error code
    if (size < 2)
    {
        cout << "Array size is too small to find the second largest element." << endl;
        return 1; // Exit with an error code
    }

    // Display the elements of the array
    cout << "Elements in the array: |";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "|";
    cout << endl;

    int firstLargest = 0;  // Initialize to smallest non zero number
    int secondLargest = 0; // Initialize to smallest non zero number

    // Find the first and second largest numbers
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > firstLargest)
        {
            secondLargest = firstLargest;
            firstLargest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != firstLargest)
        {
            secondLargest = arr[i];
        }
    }

    // Check if there is a second largest number
    if (secondLargest == 0)
    {
        cout << "There is no second largest element in the array." << endl;
    }
    else
    {
        cout << "The second largest element in the array is: " << secondLargest << endl;
    }

    return 0;
}
