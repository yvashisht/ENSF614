#include "Rectangle.h"
#include <iostream>
#include <cstring> 
#include <cmath>    
    
    
Rectangle::Rectangle(double x, double y, double sideA, double sideB, const char* name) 
    : Square(x, y, sideA, name), side_b(sideB) {}

double Rectangle::area() const {
    return side_a * side_b;
}

double Rectangle::perimeter() const {
    return 2 * side_a + 2 * side_b;
}

double Rectangle::getSideB() const {
    return side_b;
}

void Rectangle::setSideB(double side) {
    side_b = side;
}

void Rectangle::display() const {
    std::cout << "Rectangle Name: " << shapeName << std::endl;
    origin.display();
    std::cout << "Side a: " << side_a << "\nSide b: " << side_b << std::endl;
    std::cout << "Area: " << area() << "\nPerimeter: " << perimeter() << std::endl;
}