//
//  main.cpp
//  CSI2372_LAB3
//

#include <iostream>
#include "bike.hpp"
#include "bike_shed.hpp"

int main(int argc, const char * argv[]) {
    // ========= Declare and initialize variables ==========
    BikeShed bike_shed;
    Color color1(4.5, 6.0 ,7.0);
    Color color2(0.0, 0.0, 3.0);
    Color color3(0.0, 8.4 ,0.0);
    Bike john_bike("John", color1);
    Bike jane_bike("Jane", color1);
    Bike sean_bike("Sean", color2);
    Bike andrea_bike("Andrea", color2);
    Bike peter_bike("Peter", color3);
    Bike mohammed_bike("Mohammed", color3);
    Bike hong_bike("Hong", color3);
    // ========= END Declare and initialize variables ==========

    // ========= Set the bike values of each person ==========
    john_bike.setBell(true);
    john_bike.setReflector(true);
    john_bike.setNLight(1);
    
    jane_bike.setBell(true);
    jane_bike.setNLight(2);
    
    sean_bike.setBell(true);
    sean_bike.setReflector(true);
    sean_bike.setNLight(7);
    
    andrea_bike.setBell(true);
    
    peter_bike.setBell(true);
    peter_bike.setReflector(true);
    
    mohammed_bike.setBell(true);
    mohammed_bike.setReflector(true);
    mohammed_bike.setNLight(3);
    
    hong_bike.setReflector(true);
    hong_bike.setNLight(20);
    
    // ========= END Set the bike values of each person ==========
    
    // ========= Performing different checks on the bikes ==========
    bike_shed.park(john_bike);
    std::cout << "Bikes in shed after John parks:" << "\n\n";
    bike_shed.print();

    std::cout << "= = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =" << "\n\n";
    bike_shed.park(jane_bike);
    std::cout << "Bikes in shed after Jane parks:" << "\n\n";
    bike_shed.print();
    
    std::cout << "= = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =" << "\n\n";
    bike_shed.park(sean_bike);
    std::cout << "Bikes in shed after Sean parks:" << "\n\n";
    bike_shed.print();
    
    std::cout << "= = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =" << "\n\n";
    bike_shed.park(andrea_bike);
    std::cout << "Bikes in shed after Andrea parks:" << "\n\n";
    bike_shed.print();
    
    std::cout << "= = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =" << "\n\n";
    bike_shed.park(peter_bike);
    std::cout << "Bikes in shed after Peter parks:" << "\n\n";
    bike_shed.print();
    
    std::cout << "\n= = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =" << "\n\n";
    std::cout << "Illegal bikes:" << "\n\n";
    bike_shed.checkLegal();
    
    std::cout << "= = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =" << "\n\n";
    std::cout << "Removing bikes:" << "\n\n";
    
    bike_shed.remove("Peter", 1).print();
    std::cout << "Bikes in shed after Peter's bike is removed:" << "\n\n";
    bike_shed.print();
    std::cout << "= = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =" << "\n\n";
    
    bike_shed.remove("John", 1).print();
    std::cout << "Bikes in shed after John's bike is removed:" << "\n\n";
    bike_shed.print();
    std::cout << "= = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =" << "\n\n";
    
    bike_shed.remove("Andrea", 1).print();
    std::cout << "Bikes in shed after Andrea's bike is removed:" << "\n\n";
    bike_shed.print();
    std::cout << "= = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =" << "\n\n";
    
    bike_shed.park(mohammed_bike);
    std::cout << "Bikes in shed after Mohammed parks:" << "\n\n";
    bike_shed.print();
    
    std::cout << "= = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =" << "\n\n";
    bike_shed.park(hong_bike);
    std::cout << "Bikes in shed after Hong parks:" << "\n\n";
    bike_shed.print();
    
    std::cout << "= = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =" << "\n\n";
    std::cout << "Remaining bikes:" << "\n\n";
    bike_shed.print();
    
    std::cout << "\n";
    // ========= END Performing different checks on the bikes ==========
    
    return 0;
}
