#ifndef FRACTION_H
#define FRACTION_H
#include <iostream>

using namespace std;

class fraction
{
public:
    int a,d;
    fraction () {}
    fraction(int A,int D)
    {
        a=A;
        d=D;
    }

    fraction operator+ (fraction f)
    {
        fraction res;
        res.d= d*f.d;
        res.a=(a*f.d)+(f.a*d);
        return res;
    }
    fraction operator- (fraction f)
    {
        fraction res;
        res.d= d*f.d;
        res.a=(a*f.d)-(f.a*d);
        return res;
    }
    fraction operator* (fraction f)
    {
        fraction res;
        res.d= d*f.d;
        res.a=a*f.a;
        return res;
    }
    fraction operator/ (fraction f)
    {
        fraction res;
        res.d= d/f.d;
        res.a=a/f.a;
        return res;
    }
    bool operator>= (fraction f)
    {
        return a>=f.a && d<=f.d;
    }
    bool operator<= (fraction f)
    {
        return a <= f.a && d <= f.d;
    }
    bool operator== (fraction f)
    {
        return a == f.a && d == f.d;
    }
    bool operator!= (fraction f)
    {
        return a == f.a && d == f.d;
    }

    void display()
    {
        cout << a << "/" << d <<endl;
    }

    friend ostream& operator << (ostream& output ,fraction c );
    friend istream& operator >>(istream& input ,fraction& c );
    friend fraction operator+ (int x,fraction f);


};

fraction operator+ (int x,fraction f)
{
    fraction ff;
    f.a = (x*f.d) + f.a;
    return f;
}

#endif // FRACTION_H
