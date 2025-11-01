
#include <iostream>
using namespace std;

// Function to convert Celsius to Fahrenheit
void convertToFahrenheit(float* tempC, float* tempF) {
    // Convert and update value pointed by tempF
    *tempF = (*tempC) * 9 / 5 + 32;
    // Changed value via pointer
}

// Function to convert Celsius to Kelvin
void convertToKelvin(float* tempC, float* tempK) {
    // Convert and update value pointed by tempK
    *tempK = (*tempC) + 273.15;
    //Changed value via pointer
}

int main() {
    // Variables for temperatures
    float celsius = 0;
    float fahrenheit = 0;
    float kelvin = 0;
    int choice = 0;
    // Pointers
    float* ptrCelsius = &celsius;     // float pointer
    float* ptrFahrenheit = &fahrenheit;
    float* ptrKelvin = &kelvin;
    int* ptrChoice = &choice;         // int pointer

    // UX: Greet user and get input
    cout << "===== Temperature Converter =====" << endl;
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    cout << "Convert to:" << endl;
    cout << "1. Fahrenheit" << endl;
    cout << "2. Kelvin" << endl;
    cout << "Choose 1 or 2: ";
    cin >> choice;

    // UX: Main controls function calls
    if (*ptrChoice == 1) {
        convertToFahrenheit(ptrCelsius, ptrFahrenheit); // Pass pointer
        cout << "Temperature in Fahrenheit: " << fahrenheit << " F" << endl;
    }
    else if (*ptrChoice == 2) {
        convertToKelvin(ptrCelsius, ptrKelvin);         // Pass pointer
        cout << "Temperature in Kelvin: " << kelvin << " K" << endl;
    }
    else {
        cout << "Invalid choice" << endl;
    }

    // UX: Show how pointers changed values!
    cout << "\n(Proof: Value changed via pointer in function)" << endl;

    return 0;
}
