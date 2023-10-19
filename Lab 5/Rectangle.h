#include "Square.h"
#include "Shape.h"
#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle : public Square {
    
private:
    double side_b;

public:
    Rectangle(double x, double y, double sideA, double sideB, const char* name);

    virtual double area() const;
    virtual double perimeter() const;
    virtual void display() const;
    double getSideB() const;
    void setSideB(double side);
};

#endif