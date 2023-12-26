//program to convert temperature from celsius to fahrenheit and vice versa
#include <iostream>
using namespace std;

int main() {
    char choice; // Variable to store the user's choice (f or c)
    double temperature, convertedTemperature; // Variables to store temperature values

    // Display the temperature conversion menu
    cout << "Temperature Conversion Menu" << endl;
    cout << "f. Convert from Celsius to Fahrenheit" << endl;
    cout << "c. Convert from Fahrenheit to Celsius" << endl;
    cout << "Enter your choice (f or c): ";
    cin >> choice; // Read the user's choice

    // Check if the user chose to convert from Celsius to Fahrenheit
    if (tolower(choice) == 'f') {
        cout << "Enter temperature in Celsius: ";
        cin >> temperature; // Read the temperature in Celsius
        convertedTemperature = (temperature * 9/5) + 32; // Convert to Fahrenheit
        cout << "Temperature in Fahrenheit: " << convertedTemperature << "°F" << endl;
    }
    // Check if the user chose to convert from Fahrenheit to Celsius
    else if (tolower(choice) == 'c') {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temperature; // Read the temperature in Fahrenheit
        convertedTemperature = (temperature - 32) * 5/9; // Convert to Celsius
        cout << "Temperature in Celsius: " << convertedTemperature << "°C" << endl;
    }
    // Handle invalid choices
    else {
        cout << "Invalid choice. Please enter f or c." << endl;
    }

    return 0; // Return 0 to indicate successful execution
}
