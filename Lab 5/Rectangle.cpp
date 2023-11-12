#include "Rectangle.h"
#include "Square.h"
#include "Point.h"
#include <iostream>
#include <cstring> 
#include <cmath>    

Rectangle::Rectangle(double x, double y, double side_a, double side_b, const char* name)
    : Square(x, y, side_a, name), side_b(side_b) {
}

Rectangle::Rectangle(const Rectangle& source)
    : Shape(source.getName(), source.getOrigin()),
      side_a(source.side_a), 
      side_b(source.side_b) 
{
   
}

Rectangle& Rectangle::operator=(const Rectangle& other)
{
    if (this != &other)
    {
        Square::operator=(other);
    }
    return *this;
}


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

Rectangle::~Rectangle() {
}

void Rectangle::display() const {
    std::cout << "Rectangle Name: " << shapeName << std::endl;
    origin.display();
    std::cout << "Side a: " << side_a << "\nSide b: " << side_b << std::endl;
    std::cout << "Area: " << area() << "\nPerimeter: " << perimeter() << std::endl;
}