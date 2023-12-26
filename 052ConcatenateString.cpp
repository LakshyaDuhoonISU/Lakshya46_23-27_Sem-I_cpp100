// including required header files
#include <iostream>
using namespace std;

// main function
int main() {

    // input 2 strings
    char str1[100], str2[100];

    cout << "Enter the first string: ";
    cin.getline(str1, sizeof(str1));
    
    
    cout << "Enter the second string: ";
    cin.getline(str2, sizeof(str2));

    // Concatenating the strings
    int len1 = 0;
    while (str1[len1] != '\0') {
        len1++;
    }

    int len2 = 0;
    while (str2[len2] != '\0') {
        len2++;
    }

    
    char result[len1 + len2 + 1];

    
    for (int i = 0; i < len1; i++) {
        result[i] = str1[i];
    }

    
    for (int i = 0; i < len2; i++) {
        result[len1 + i] = str2[i];
    }

    
    result[len1 + len2] = '\0';

    
    cout << "Concatenated string: " << result <<endl;

    return 0;
}
