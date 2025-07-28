// CSC450 Module 2: String Input Console Application
// Author: Raishawn Jones
// Date: July, 27, 2025
// Description: This program will take a string input from the user and display it back to the user
#include <iostream> // Including the iostream library for input/output operations
#include <string> // Including the string library for string operations

int main() {
    std::string str1, str2, combined; 
// Prompt user for input three times
    for (int i = 1; i <= 3; ++i) {
        std::cout << "Test " << i << ":\n"; // Display the test number

        std::cout << "Enter the first string: "; // Prompt for the user for the first string
        std::getline(std::cin, str1); // Use getline to allow spaces in this input

        std::cout << "Enter the second string: "; // Prompt the user for the second string
        std::getline(std::cin, str2); // Use getline to allow spaces in this input

        combined = str1 + str2; // Concatenate the two given strings
        std::cout << "Concatenated result: " << combined << "\n\n"; // Display the concatenated result
    }

    return 0; // Return 0 to indicate a successful execution
}
