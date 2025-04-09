#include <iostream>
#include <cstring>

// Simulate a basic program that allows user input and performs unsafe memory manipulation
void vulnerableFunction(char* userInput) {
    char buffer[64];  // Fixed-size buffer

    // Unsafely copy user input to buffer without bounds checking
    strcpy(buffer, userInput);

    std::cout << "You entered: " << buffer << std::endl;
}

int main() {
    char input[128];

    std::cout << "Enter your input: ";
    std::cin.getline(input, 128); // Read up to 127 characters

    vulnerableFunction(input);  // Call the vulnerable function

    return 0;
}
