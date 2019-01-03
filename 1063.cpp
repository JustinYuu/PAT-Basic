#include <iostream>
#include <cstdio>
#include <math.h>
using namespace std;

int main()
{
    int n;
    double a,b;
    double c;
    double tmp=0.0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        scanf("%lf %lf",&a,&b);
        c=sqrt(pow(a,2)+pow(b,2));
        tmp=max(tmp,c);
    }
    printf("%.2f",tmp);
    return 0;
}
