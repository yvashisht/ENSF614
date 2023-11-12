#include "Square.h"
#include "Shape.h"
#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle : public Square {
    
private:
    double side_b;

public:
    
    Rectangle(double x, double y, double side_a, double side_b, const char* name);
    Rectangle(const Rectangle& source);
    virtual ~Rectangle();
    Rectangle& operator=(const Rectangle& r);
    virtual double area() const;
    virtual double perimeter() const;
    virtual void display() const;
    void setName(const char* name);
    void setOrigin(double x, double y);
    double getSideB() const;
    void setSideB(double side);
};

#endif