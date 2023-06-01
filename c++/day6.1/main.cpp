#include <iostream>
#include <rectangle.h>
#include <square.h>
#include "Picture.h"
#include "circle.h"
#include "Shape.h"
using namespace std;

int main()
{
    /*
    square sq(5);
    sq.displayArea();
    ///------------------------------///
    rectangle *rec1= new rectangle(2,5);
    rec1->displayArea();
    ///------------------------------///
    circle cr(5);
    cr.displayArea();
    ///------------------------------///
    */


    shape *arr[3];
    arr[0]=new square(5);
    arr[1]=new rectangle(2,5);
    arr[2]=new circle(2);
    Picture p;
    p.calcTotalArea(arr);
    p.displayTotalArea();



    return 0;
}
