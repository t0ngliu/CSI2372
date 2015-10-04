//
//  main.cpp
//  CSI2372_LAB2
//
//  Created by Tong Liu on 2015-09-29.
//  Copyright (c) 2015 Tong Liu. All rights reserved.
//

#include <iostream>
#include <string>
#include "convert.h"

using std::cout;
using std::cin;
using std::string;

int main(int argc, const char * argv[]) {

    string input_string{""};
    int num_vowel_repeats{0};
    
    cout << "Please enter a sentence (with spaces):\n> ";
    // Make sure theres no errors in the user input
    if (!getline(cin, input_string)) {return -1;}
    cout << "Enter number of vowel repeats:\n> ";
    // Make sure theres no errors in the user input
    cin >> num_vowel_repeats;
    
    cout << "\nOriginal string: " << input_string;
    
    char *upper_case = upConvert(input_string);
    // The stream insertion operator is overloaded for pointers to C-style strings for printing the content of the string
    cout << "\n\nUppercase: " << upper_case;
    delete []upper_case;

    char *repeated_vowels = repeatConvert(input_string, num_vowel_repeats);
    // The stream insertion operator is overloaded for pointers to C-style strings for printing the content of the string
    cout << "\nRepeated Vowels: " << repeated_vowels << "\n\n";
    delete []repeated_vowels;
    
    return 0;
}
