//
//  bike.hpp
//  CSI2372_LAB3
//

#ifndef bike_hpp
#define bike_hpp

#include <string>

typedef struct Color{
    float d_red, d_green, d_blue;
    Color();
    Color(float red, float green, float blue);
} Color;

class Bike {
private:
    std::string d_owner;
    Color d_color;
    int d_nLight;
    bool d_bell;
    bool d_reflector;
    
public:
    Bike();
    Bike(std::string, Color color);
    
    void setNLight(int light);
    int getNLight();
    void setBell(bool bell);
    bool hasBell();
    void setReflector(bool reflector);
    bool hasReflector();
    void setOwner(std::string owner);
    std::string getOwner();
    bool isLegal();
    void print();
};

#endif /* bike_hpp */
