//
//  main.cpp
//  CSI2372_LAB2
//

#include <iostream>
#include <string>
#include "convert.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(int argc, const char * argv[]) {

    string input_string{""};
    int vowel_repeats{0};
    
    cout << "Please enter a sentence (with spaces):\n>";
    // Make sure theres no errors in the user input
    if (!getline(cin, input_string)) {return -1;}
    cout << "Enter number of vowel repeats:\n>";
    // Make sure theres no errors in the user input
    cin >> vowel_repeats;
    
    char *result1 = upConvert(input_string);
    
    cout << "\n";
    // Hard code the length, since retrieving array length from pointer is not possible
    for (int i{0}; i <= 100; i++){
        cout << result1[i];
    }
    cout << "\n";
    
    delete [] result1;

    char *result2 = repeatConvert(input_string, vowel_repeats);
    
    cout << "\n";
    // Hard code the length, since retrieving array length from pointer is not possible
    for (int i{0}; i <= 100; i++){
        cout << result2[i];
    }
    cout << "\n\n";
    
    delete [] result2;
    
    return 0;
}
