#include <iostream>
#include <fraction.h>
using namespace std;
ostream& operator << (ostream& output ,fraction f )
{
   output<<f.a <<"/"<<f.d<<endl;
   return output;
};

istream& operator >>(istream& input ,fraction& f )
{
   input>>f.a>>f.d;
   return input;
};

int main()
{
        ///////////////////////////////////////
        ///////////////////////////////////////
    fraction f1(3,4);
    fraction f2(3,4);
    /*
    fraction f3 = f1 + f2;
    fraction f4 = f1 - f2;
    fraction f5 = f1 * f2;
    fraction f6 = f1 / f2;
    f3.display();
    cout << "\n";
    f4.display();
    cout << "\n";
    f5.display();
    cout << "\n";
    f6.display();
    */

    bool res = f1<=f2;
    if (res == true)
    {
        cout<< "f1 bigger than f2\n";
    }
    else
    {
        cout<< "f2 bigger than f1\n";
    }
    bool res2 = f1!=f2;
    f1.display();
    f2.display();
    if (res2 == true)
    {
        cout<< "f1 is equal f2\n";
    }
    else
    {
        cout<< "f2 not equal f1\n";
    }
    fraction f8 = 5+f2;
    f8.display();
    return 0;
}
