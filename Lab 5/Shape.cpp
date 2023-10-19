#include "Shape.h"
#include "Point.h"
#include <iostream>
#include <cstring> 
#include <cmath> 

Shape::Shape(double x, double y, const char* name) : origin(x, y) {
    shapeName = new char[std::strlen(name) + 1];
    std::strcpy(shapeName, name);
}

Shape::~Shape() {
    delete[] shapeName;
}

const Point& Shape::getOrigin() const {
    return origin;
}

const char* Shape::getName() const {
    return shapeName;
}

void Shape::display() const {
    std::cout << "Shape Name: " << shapeName << std::endl;
    origin.display();
}

double Shape::distance(Shape& other) {
    return origin.distance(other.origin);
}

double Shape::distance (Shape& the_shape, Shape& other) {
    return Point::distance(the_shape.origin, other.origin);
}

void Shape::move(double dx, double dy) {
    origin.setX(origin.getX() + dx);
    origin.setY(origin.getY() + dy);
}