// c++ program to find the majority element in an array(appearing more than N/2 times)
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
    cout << "Enter elements of the array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
        if (arr[i]==0)
        {
            cout << "Invalid element. Please enter a positive integer." << endl;
            return 1; //Exit with an error code
        }
    }

    // Display the elements of the array
    cout << "Elements in the array: |";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "|";
    cout << endl;

    int majorityElement = -1;
    int count = 0;

    // Find the majority element (if it exists)
    for (int i = 0; i < size; i++)
    {
        int currentElement = arr[i];
        count = 0;

        for (int j = 0; j < size; j++)
        {
            if (arr[j] == currentElement)
            {
                count++;
            }
        }

        if (count > size / 2)
        {
            majorityElement = currentElement;
            break;
        }
    }

    if (majorityElement != -1)
    {
        cout << "The majority element is: " << majorityElement << endl;
    }
    else
    {
        cout << "No majority element found in the array." << endl;
    }

    return 0;
}
