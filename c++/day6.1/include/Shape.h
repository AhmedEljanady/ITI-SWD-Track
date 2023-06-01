#ifndef SHAPE_
#define SHAPE_
#include <iostream>
using namespace std;

class shape
{
    protected:
        float side;
    public:
        void setSide(float s)
        {
            side = s;
        }
        float getSide()
        {
            return side;
        }
        virtual float calcArea()=0;
        virtual void displayArea()=0;

        shape (float s)
        {
            side = s;
        }
        shape(){}


};

#endif // SHAPE_
