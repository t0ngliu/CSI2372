//
//  main.cpp
//  CSI2372_LAB2
//

#include <iostream>
#include <string>
#include "convert.h"

int main(int argc, const char * argv[]) {
    
    // Use implicit declaration and initialization for clarity
    std::string input_string{""};
    int num_vowel_repeats{0};
    
    //================== Get user input ==================
    std::cout << "Please enter a sentence (with spaces):\n> ";
    // Make sure theres no errors in the user input
    if (!getline(std::cin, input_string)) {
        return -1;
    }
    std::cout << "Enter number of vowel repeats:\n> ";
    // Make sure theres no errors in the user input
    std::cin >> num_vowel_repeats;
    // ================== END Get user input ==================
    
    std::cout << "\nOriginal string: \"" << input_string << "\"";
    
    //================== Print the conversion ==================
    char *upper_case = upConvert(input_string);
    // The stream insertion operator is overloaded for pointers to C-style strings for printing the content of the string
    std::cout << "\n\nUppercase: \"" << upper_case << "\"";
    delete []upper_case;

    char *repeated_vowels = repeatConvert(input_string, num_vowel_repeats);
    // The stream insertion operator is overloaded for pointers to C-style strings for printing the content of the string
    std::cout << "\nRepeated Vowels: \"" << repeated_vowels << "\"\n\n";
    delete []repeated_vowels;
    //================== END Print the conversion ==================
    
    return 0;
}