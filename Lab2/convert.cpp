//
//  convert.cpp
//  CSI2372_LAB2
//

#include <string>
#include <cstring>

using std::string;

char* upConvert(const string& in) {
    
    // Size of the input string
    size_t in_length{in.length()};
    // Create dynamically allocated character array of same length as the original string
    char *c_string = new char[in_length];
    // Copy elements of the "in" string into the C char array
    strncpy(c_string, in.c_str(), in_length);
    
    // Create a temporary buffer to hold the result of the upper case conversion
    char *buffer = new char[in_length];
    
    for (int i{0}; i < in_length; i++){
        // If char is lower case then convert to upper case and put into temporary buffer
        if ((c_string[i] > 96) && (c_string[i] < 123)) {
            c_string[i] -= 32;
            buffer[i] = c_string[i];
        }
        // If already upper case then just put into temporary buffer
        if ((c_string[i] > 64) && (c_string[i] < 91)) {
            buffer[i] = c_string[i];
        }
        // Account for spaces
        if (c_string[i] == 32) {
            buffer[i] = ' ';
        }
    }
    
    // Delete the dynamic char array
    delete []c_string;
    
    return buffer;
}

char* repeatConvert(const string& in, int r) {
    
    // Size of the input string
    size_t in_len{in.length()};
    // Create dynamically allocated character array of same length as the original string
    char *c_string = new char[in_len];
    // Copy elements of the "in" string into the C char array
    strncpy(c_string, in.c_str(), in_len);
    
    // Count number of vowels in string
    int num_vowels{0};
    for (int i{0}; i < in_len; i++) {
        if (c_string[i] == 'a' || c_string[i] == 'A' || c_string[i] == 'e' || c_string[i] == 'E' || c_string[i] == 'i' || c_string[i] == 'I' || c_string[i] =='o' || c_string[i] == 'O' || c_string[i] == 'u' || c_string[i] == 'U') {
            num_vowels++;
        }
    }
    
    // Declare a dynamic array of the number of chars needed for the final expanded array
    char *buffer = new char[in_len+(num_vowels*r)];
    // Declare temporary pointer to the dynamic char array
    char *ptr = buffer;
    
    for (int i{0}; i < in_len; i++) {
        // If vowel occurs
        if (c_string[i] == 'a' || c_string[i] == 'A' || c_string[i] == 'e' || c_string[i] == 'E' || c_string[i] == 'i' || c_string[i] == 'I' || c_string[i] =='o' || c_string[i] == 'O' || c_string[i] == 'u' || c_string[i] == 'U') {
            // Repeat the vowel r many times
            for (int j{0}; j < r; j++) {
                *ptr = c_string[i];
                ptr++;
            }
        } else {
            // If not a vowel move temporary pointer to next char
            *ptr = c_string[i];
            ptr++;
        }
    }
    
    // Delete the dynamic char array
    delete []c_string;
    
    return buffer;
}





