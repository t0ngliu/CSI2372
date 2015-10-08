//
//  prime.cpp
//  CSI2372_LAB1
//

/*
 * Takes an input and returns whether the input is prime or not
 * @return bool number is prime
 */
bool isPrime(unsigned int num) {
    // Compare num with hex representation of one using bitwise AND
    // to get the Least Significant Bit (LSB)
    if ((num & 0x1) == 0) {
        // Since two is even, but also a prime
        if (num == 2) {
            return true;
        }
        return false;
    } else {
        // Accounts for base cases one and zero
        if (num == 1 || num == 0) {
            return false;
        }
        for (int i = 3; i*i <= num; i += 2) {
            if ((num % i) == 0) {
                return false;
            }
        }
    }
    return true;
}
