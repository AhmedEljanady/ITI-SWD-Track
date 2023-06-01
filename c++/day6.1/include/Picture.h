#ifndef PICTURE_H
#define PICTURE_H
#include <iostream>
#include <rectangle.h>
#include <square.h>
#include "Shape.h"
using namespace std;

class Picture
{
public:
    float x=0;
    float total=0;
    shape *arr[3];
    //arr[0]=new square();
    //arr[1]=new rectangle(2,5);
    //arr[2]=new circle(5);


    Picture()
    {
    }
    /*Picture (square _sq1,rectangle* _rec1)
    {
        sq1 = _sq1;
        rec1 = _rec1;
    }*/
    float calcTotalArea(shape *arr[])
    {
        for(int i=0;i<3;i++)
        {
            x = arr[i]->calcArea();
            total += x;
            arr[i]->displayArea();
        }
        return total;
    }
    void displayTotalArea()
    {
        cout<<"\n\n   Total area is: \t"<<total<<endl;
    }
    /*
    void setSquare(square _sq1)
    {
        sq1 = _sq1;
    }
    square getSquare()
    {
        return sq1;
    }
    void setRectangle(rectangle* _rec1)
    {
        rec1 = _rec1;
    }
    rectangle* getRectangle()
    {
        return rec1;
    }

    float calTotalArea()
    {
        return rec1->calcArea() + sq1.calcArea();
    }
    void displayTotalArea()
    {
        cout<< "Total area is: "<< this->calTotalArea()<< endl;
    }*/

};

#endif // PICTURE_H
