//
//  bike_shed.hpp
//  CSI2372_LAB3
//

#ifndef bike_shed_hpp
#define bike_shed_hpp

#include <iostream>
#include "bike.hpp"

class BikeShed {
private:
    // Use implicit initialization for each object of Bike
    Bike d_bike[10]{{}};
    
public:
    // Use the default constructor supplied by the compiler
    // BikeShed();
    
    bool park(const Bike &bike);
    // Not sure what the second int parameter is used for
    Bike remove(const std::string &str, int n);
    bool checkLegal();
    void print();
};

#endif /* bike_shed_hpp */