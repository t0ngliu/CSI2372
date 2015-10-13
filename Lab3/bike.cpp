//
//  bike.cpp
//  CSI2372_LAB3
//

#include <iostream>
#include <string>
#include "bike.hpp"

// ========= Constructors ==========
Color::Color(){}
Color::Color(float red, float green, float blue) : d_red(red), d_green(green), d_blue(blue) {}

Bike::Bike() : d_owner("None"), d_nLight(0), d_bell(false), d_reflector(false), d_color(0.0, 0.0, 0.0) {}
Bike::Bike(std::string owner, Color color) : d_owner(owner), d_color(color), d_nLight(0), d_bell(false), d_reflector(false) {}
// ========= END Constructors ==========

// ========= Public getter and setter functions ==========
void Bike::setBell(bool bell)           { d_bell = bell; }
bool Bike::hasBell()                    { return d_bell; }
void Bike::setNLight(int light)         { d_nLight = light; }
int Bike::getNLight()                   { return d_nLight; }
void Bike::setReflector(bool reflector) { d_reflector = reflector; }
bool Bike::hasReflector()               { return d_reflector; }
void Bike::setOwner(std::string owner)  { d_owner = owner; }
std::string Bike::getOwner()            { return d_owner; }
// ========= END Public getter and setter functions ==========

bool Bike::isLegal()                    { return (d_nLight > 1 && d_reflector && d_bell); }
void Bike::print()                      { std::cout << "Bike Owner: " << d_owner << " Color (rgb): " << d_color.d_red << " " << d_color.d_green << " " << d_color.d_blue << " Lights: " << d_nLight << " Bell: " << ((d_bell) ? "yes" : "no") << " Reflector: " << ((d_reflector) ? "yes" : "no") << '\n'; }