//============================================================================
// Name        : CSC450.cpp
// Author      : Raishawn Jones
// Version     :
// Copyright   : Your copyright notice
// Description : Module 5 Critical Thinking Assignment
//============================================================================

#include <iostream>
#include <fstream>
#include <string> // for std::string
#include <algorithm>  // for std::reverse

using namespace std;

// Function to get user's input
int main() {
    string userInput;

    // Step 1: Get input from user
    cout << "Enter text to save: ";
    getline(cin, userInput);

    // Step 2: Append user input to the CSC450_CT5_mod5.txt file
    ofstream outFile("CSC450_CT5_mod5.txt", ios::app);  // append mode
    if (!outFile) {
        cerr << "Sorry, error opening the file for writing!!" << endl;
        return 1;
    }
    outFile << userInput << endl;
    outFile.close();

    // Step 3: Read all contents from the CSC450_CT5_mod5.txt file
    ifstream inFile("CSC450_CT5_mod5.txt");
    if (!inFile) {
        cerr << "Sorry, error opening the file for reading!!" << endl;
        return 1;
    }

    string fileContents;
    string line;
    while (getline(inFile, line)) {
        fileContents += line + "\n";  // preserve line breaks
    }
    inFile.close();

    // Step 4: Reverse all characters
    reverse(fileContents.begin(), fileContents.end());

    // Step 5: Save reversed content to CSC450-mod5-reverse.txt
    ofstream reverseFile("CSC450-mod5-reverse.txt");
    if (!reverseFile) {
        cerr << "Sorry, error opening the reverse file for writing!!" << endl;
        return 1;
    }
    reverseFile << fileContents;
    reverseFile.close();

    cout << "Good news!Data saved and reversed successfully!" << endl;

    return 0;
}
