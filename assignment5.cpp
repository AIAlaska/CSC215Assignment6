// Assignment 5: Bank Balance Swap
// Name: [Your Name]
// CSC215 - Fall 2025

#include <iostream>
using namespace std;

// Function for normal balance checking (pass by value)
void checkBalances(int coffee, int terror) {
    cout << "Normal Transaction:" << endl;
    cout << "Joe's Coffee Shop: $" << coffee << endl;
    cout << "Bank of Terror:    $" << terror << endl;
}

// Function for hacked transaction (pass by reference)
void hackBalances(int& coffee, int& terror) {
    // Swap balances using a temporary variable
    int temp = coffee;
    coffee = terror;
    terror = temp;
    cout << "Hacked Transaction: Funds swapped!" << endl;
    cout << "Joe's Coffee Shop: $" << coffee << endl;
    cout << "Bank of Terror:    $" << terror << endl;
}

int main() {
    // Set starting balances
    int joes = 1000;     // Joe's Coffee Shop
    int terror = 300000; // Bank of Terror

    // Print original
    cout << "--- Original Balances ---" << endl;
    cout << "Joe's Coffee Shop: $" << joes << endl;
    cout << "Bank of Terror:    $" << terror << endl;
    cout << endl;

    // Normal check (should do nothing)
    checkBalances(joes, terror);
    cout << endl;

    // Hacked transaction (swap by reference)
    hackBalances(joes, terror);
    cout << endl;

    // Final balances
    cout << "--- Final Balances ---" << endl;
    cout << "Joe's Coffee Shop: $" << joes << endl;
    cout << "Bank of Terror:    $" << terror << endl;

    return 0;
}
