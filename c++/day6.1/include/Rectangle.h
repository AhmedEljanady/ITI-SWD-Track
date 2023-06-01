#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <iostream>
#include "Shape.h"
using namespace std;

class rectangle: public shape
{
    float width;

    public:
    /*
    void setSide(float h)
    {
        side =  h;
    }
    float getSide()
    {
        return side;
    }*/
    void setwidth(float w)
    {
        width =  w;
    }
    float getwidth()
    {
        return width;
    }
    float calcArea()
    {
        return side * width * 2;
    }
    void displayArea()
    {
        cout<< "Rectangle area is: \t"<< this->calcArea()<< endl;
    }


    rectangle()
    {
    }
    rectangle(float s,float w)
    {
         side=s;
         width=w;
    }
};

#endif // RECTANGLE_H
