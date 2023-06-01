#ifndef CIRCLE_
#define CIRCLE_
#include "Shape.h"
#include <iostream>
using namespace std;

class circle:public shape
{
    public:
        circle() {}
        circle (float c)
        {
            side=c;
        }


        float calcArea()
        {
            return side*side*3.14;
        }
        void displayArea()
        {
            cout<< "Circle area is: \t"<< this->calcArea()<< endl;
        }
};

#endif // CIRCLE_
