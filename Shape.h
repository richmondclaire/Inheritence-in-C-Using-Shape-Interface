#ifndef __SHAPE_H__
#define __SHAPE_H__

#include <string>
#include "Rectangle.h"
#include "Triangle.h"
#include "Circle.h"

class Shape
{
    private:
        std::string name;

    public:
        Shape(std::string shapeName);
        ~Shape();

        double getArea();

        //void print();
        virtual void print();      // for later testing
         //virtual void print() = 0;  // for later testing
};

#endif

