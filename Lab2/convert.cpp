//
//  convert.cpp
//  CSI2372_LAB2
//

#include <string>

using std::string;

char* upConvert(const string& in) {
    size_t in_length{in.length()};
    char *c_string = new char[in_length];
    strncpy(c_string, in.c_str(), in_length);
    
    char *buffer = new char[in_length];
    
    for (int i{0}; i < in_length; i++){
        if ((c_string[i] > 96) && (c_string[i] < 123)) {
            c_string[i] -= 32;
            buffer[i] = c_string[i];
        }
        if ((c_string[i] > 64) && (c_string[i] < 91)) {
            buffer[i] = c_string[i];
        }
        if (c_string[i] == 32) {
            buffer[i] = ' ';
        }
    }
    
    delete [] c_string;
    
    return buffer;
}

char* repeatConvert(const string& in, int r) {
    
    // Convert String to old style C "string"
    size_t in_len{in.length()};
    char *c_string = new char[in_len];
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
    char *ptr = buffer;
    
    for (int i{0}; i < in_len; i++) {
        // If vowel occurs
        if (c_string[i] == 'a' || c_string[i] == 'A' || c_string[i] == 'e' || c_string[i] == 'E' || c_string[i] == 'i' || c_string[i] == 'I' || c_string[i] =='o' || c_string[i] == 'O' || c_string[i] == 'u' || c_string[i] == 'U') {
            for (int j{0}; j < r; j++) {
                *ptr = c_string[i];
                ptr++;
            }
        } else {
            *ptr = c_string[i];
            ptr++;
        }
    }
    
    delete [] c_string;
    
    return buffer;
}





