#include <iostream>

using namespace std;

struct point
{
    int a,b;
};
int mul(int x,int y)
{
    return x*y;
}
double mul(double x,double y)
{
    return x*y;
}
point mul(point x,point y)
{
    point res;
    res.a = x.a * y.a;
    res.b = x.b * y.b;
    return res;
}

int main()
{
    int a=5,b=10;
    double da=5.5,db=10.5;
    point pa, pb, pc;
    pa.a=2;
    pb.a=3;
    pa.b=4;
    pb.b=5;
    pc=mul(pa,pb);
    cout << mul(a,b)<< endl;
    cout <<mul(da,db)<< endl;
    cout << pc.a<< endl;
    cout <<pc.b << endl;

    return 0;
}
