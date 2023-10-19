#include "Point.h"
#include <iostream>
#include <cmath> 

int Point::count = 1001;

Point::Point(double x, double y) : x(x), y(y) {
    id = ++count;
}

Point::~Point() {
}

void Point::display() const {
    std::cout << "X-coordinate: " << x << std::endl;
    std::cout << "Y-coordinate: " << y << std::endl;
}

double Point::getX() const {
    return x;
}

double Point::getY() const {
    return y;
}

void Point::setX(double newX) {
    x = newX;
}

void Point::setY(double newY) {
    x = newY;
}

int Point::counter() {
    return count - 1000;
}

double Point::distance(const Point& other) const {
    return sqrt(pow(other.x - x, 2) + pow(other.y - y, 2));
}

double Point::distance(const Point& a, const Point& b) {
    return sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
}