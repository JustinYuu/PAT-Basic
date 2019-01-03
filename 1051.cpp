#include <iostream>
#include <cstdio>
#include <math.h>
using namespace std;

int main()
{
    double r1,r2,p1,p2;
    cin>>r1>>p1>>r2>>p2;
    double a,b;
    a = (r1*r2)* cos(p1+p2);
    b = (r1*r2)* sin(p1+p2);
    if(abs(a)<0.01)
        a=0;
    if(abs(b)<0.01)
        b=0;
    if(b<0)
        printf("%.2f%.2fi",a,b);
    else
        printf("%.2f+%.2fi",a,b);
    return 0;
}
