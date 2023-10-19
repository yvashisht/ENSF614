#include "graphicsWorld.h"
#include "Point.h"
#include "Square.h"
#include "Rectangle.h"
#include <iostream>

void GraphicsWorld::run() {

#if 0 // Change 0 to 1 to test Point
    Point m(6, 8);
    Point n(6, 8);
    n.setx(9); // This should probably be setX based on your previous code
    std::cout << "\nExpected to display the distance between m and n is: 3";
    std::cout << "\nThe distance between m and n is: " << m.distance(n);
    std::cout << "\nExpected second version of the distance function also to print: 3";
    std::cout << "\nThe distance between m and n is again: " << Point::distance(m, n) << std::endl;
#endif

#if 0 // Change 0 to 1 to test Square
    std::cout << "\n\nTesting Functions in class Square:" << std::endl;
    Square s(5, 7, 12, "SQUARE - S");
    s.display();
#endif

#if 1 // Change 0 to 1 to test Rectangle
    std::cout << "\nTesting Functions in class Rectangle:" << std::endl;
    Rectangle a(5, 7, 12, 15, "RECTANGLE A");
    a.display();
    Rectangle b(16, 7, 8, 9, "RECTANGLE B");
    b.display();
    double d = a.distance(b);
    std::cout << "\nDistance between square a, and b is: " << d << std::endl;
    Rectangle rec1 = a;
    rec1.display();

    std::cout << "\nTesting assignment operator in class Rectangle:" << std::endl;
    Rectangle rec2(3, 4, 11, 7, "RECTANGLE rec2");
    rec2.display();
    rec2 = a;
    a.setSideB(200); // Assuming your setters are named this way
    a.setSideA(100);
    std::cout << "\nExpected to display the following values for object rec2: " << std::endl;
    std::cout << "Rectangle Name: RECTANGLE A\nX-coordinate: 5\nY-coordinate: 7\n"
              << "Side a: 12\nSide b: 15\nArea: 180\nPerimeter: 54\n";
    std::cout << "\nIf it doesn't there is a problem with your assignment operator.\n" << std::endl;
    rec2.display();

    std::cout << "\nTesting copy constructor in class Rectangle:" << std::endl;
    Rectangle rec3(a);
    rec3.display();
    a.setSideB(300);
    a.setSideA(400);
    std::cout << "\nExpected to display the following values for object rec2: " << std::endl;
    std::cout << "Rectangle Name: RECTANGLE A\nX-coordinate: 5\nY-coordinate: 7\n"
              << "Side a: 100\nSide b: 200\nArea: 20000\nPerimeter: 600\n";
    std::cout << "\nIf it doesn't there is a problem with your assignment operator.\n" << std::endl;
    rec3.display();
#endif

#if 0 // Change 0 to 1 to test using array of pointer and polymorphism
    std::cout << "\nTesting array of pointers and polymorphism:" << std::endl;
    sh[0] = &s;
    sh[1] = &b;
    sh[2] = &rec1;
    sh[3] = &rec3;
    sh[0]->display();
    sh[1]->display();
    sh[2]->display();
    sh[3]->display();
#endif

}

