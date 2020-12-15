#include "Shape.h"
#include "Circle.h"
#include "Triangle.h"
#include "Rectangle.h"
#include <iostream>
using namespace std;


int main() {
    // Let's test Shape.cpp
   

   Circle circle("circ", 12.0);
   cout << "Testing area method for circle: " << "";
   cout << circle.getArea() << endl;

   Triangle triangle("tri", 5.0, 4.0);
   cout << "Testing area method for triangle: " << "";
   cout << triangle.getArea() << endl;

    Rectangle rectangle("rect", 4.0, 5.0);
    cout << "Testing area method for rectangle: " << "";
    cout << rectangle.getArea() << endl;

    cout << endl;
   
   cout << "Testing print method for circle: " << endl;
   circle.print();
   cout << endl;

   cout << "Testing print method for triangle: " << endl;
   triangle.print() ;
   cout << endl;

   cout << "Testing print method for rectangle: " << endl;
   rectangle.print() ;
   cout << endl;

Circle* shapePtr = &circle;
shapePtr->print();
Triangle* shapePtr2 = &triangle;
shapePtr2->print();
Rectangle* shapePtr3 = &rectangle;
shapePtr3->print();

};
