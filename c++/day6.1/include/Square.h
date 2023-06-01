#ifndef SQUARE_H
#define SQUARE_H
#include "Shape.h"
#include <iostream>
using namespace std;

class square: public shape
{

    //float side;

    public:
    /*
    void setSide(float f)
    {
        side =  f;
    }
    float getSide()
    {
        return side;
    }*/
    float calcArea()
    {
        return side * side;
    }
    void displayArea()
    {
        cout<< "Square area is: \t"<< this->calcArea()<< endl;
    }


    square()
    {
    }
    square(float f)
    {
        side = f;
    }
};

#endif // SQUARE_H
