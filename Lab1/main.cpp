//
//  main.cpp
//  CSI2372_LAB1
//

#include <iostream>
#include "prime.h"

using std::cout;
using std::cin;
using std::endl;

int main(int argc, const char * argv[]) {
    
    unsigned int userInput = 0;

    cout << "Enter a number: ";
    cin >> userInput;

    if (isPrime(userInput)) {
        cout << userInput << " is prime" << endl;
    } else {
        cout << userInput << " is not prime" << endl;
    }
    
    return 0;
}

































