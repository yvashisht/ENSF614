#include "Square.h"
#include "Point.h"
#include <iostream>
#include <cstring> 
#include <cmath>   

Square::Square(double x, double y, double side, const char* name)
    : Shape(x, y, name), side_a(side) {
}

double Square::area() const {
    return side_a * side_a;
}

double Square::perimeter() const {
    return 4 * side_a;
}

double Square::getSideA() const {
    return side_a;
}

void Square::setSideA(double side) {
    side_a = side;
}

void Square::display() const {
    std::cout << "Square Name: " << shapeName << std::endl;
    origin.display();
    std::cout << "Side a: " << side_a << std::endl;
    std::cout << "Area: " << area() << std::endl;
    std::cout << "Perimeter: " << perimeter() << std::endl;
}