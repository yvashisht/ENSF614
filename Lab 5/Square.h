#include "Shape.h"
#include "Point.h"
#ifndef SQUARE_H
#define SQUARE_H

class Square : public Shape {

protected: 
    double side_a;

public:
    Square(double x, double y, double side, const char* name);
    virtual double area() const;
    virtual double perimeter() const;
    virtual void display() const;
    double getSideA() const;
    void setSideA(double side);
};

#endif