#include <stdio.h>
#include <stdlib.h>

int Add(int x,int y){
return x+y;
}
int Sub(int x,int y){
return x-y;
}
int Multi(int x,int y){
return x*y;
}
float Divide(float x,float y){
if (y==0){
    printf("ERROR!!");
}else {
    return x/y;
}
}

int main()
{
    int a,s,m;
    float d;

    a = Add(20,5);
    printf("%i \n",a);

    s = Sub(20,5);
    printf("%i\n",s);

    m = Multi(20,5);
    printf("%i \n",m);

    d = Divide(151,2);
    printf("%f \n",d);

    return 0;
}
