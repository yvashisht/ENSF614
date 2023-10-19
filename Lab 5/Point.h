#ifndef POINT_H
#define POINT_H

class Point {

private:
    double x;
    double y;
    int id;
    static int count;

public:
    Point(double x, double y);
    ~Point();

    void display() const;
    double getX() const;
    double getY() const;
    void setX(double newX);
    void setY(double newY);
    static int counter();
    double distance(const Point& other) const;
    static double distance(const Point& a, const Point& b);

};

#endif