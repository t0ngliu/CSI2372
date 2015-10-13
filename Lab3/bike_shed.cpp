//
//  bike_shed.hpp
//  CSI2372_LAB3
//

#include <iostream>
#include "bike_shed.hpp"

/*
 * Adds a bike to an available spot and returns true. 
 * If the BikeShed is full, the function returns false.
 */
bool BikeShed::park(const Bike &bike) {
    // Loop until 10 since there are only 10 available spots in the shed
    for (int i = 0; i < 10; ++i) {
        if (d_bike[i].getOwner() == "None") {
            d_bike[i] = bike;
            return true;
        }
    }
    return false;
}

/*
 * Removes and returns the first bike with an owner of the given name. 
 * If such a bike is not found, the function returns a bike "None".
 */
Bike BikeShed::remove(const std::string &str, int n) {
    for (int i = 0; i < 10; ++i) {
        if (d_bike[i].getOwner() == str) {
            Bike temp = d_bike[i];
            d_bike[i] = Bike();
            return temp;
        }
    }
    return Bike();
}

/*
 * Return true if all bikes owned by other than "None" are legal. 
 * If a bike is found illegal print a message printing the bike.
 */
bool BikeShed::checkLegal() {
    bool isLegal_flag = true;
    for (int i = 0; i < 10; ++i) {
        if (d_bike[i].getOwner() != "None" && !d_bike[i].isLegal()) {
            isLegal_flag = false;
            std::cout << "The bike with owner: " << d_bike[i].getOwner() << " is illegal!\n";
        }
    }
    return isLegal_flag;
}

/*
 * Prints all the bikes with owners other than "None".
 */
void BikeShed::print() {
    for (int i = 0; i < 10; ++i) {
        if (d_bike[i].getOwner() != "None") {
            d_bike[i].print();
        }
    }
}