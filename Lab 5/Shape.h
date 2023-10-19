#include "Point.h"
#ifndef SHAPE_H
#define SHAPE_H

class Shape {

protected:
    Point origin;
    char* shapeName;

public:
    Shape(double x, double y, const char* name);
    virtual ~Shape();

    const Point& getOrigin() const;
    const char* getName() const;
    virtual void display() const;
    double distance(Shape& other);
    static double distance (Shape& the_shape, Shape& other);
    void move(double dx, double dy);
};

#endif