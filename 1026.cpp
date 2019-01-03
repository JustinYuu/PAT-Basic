#include <cstdio>
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double c1,c2;
    double num;
    int h,m,s;
    cin>>c1>>c2;
    num = (c2-c1)/100;
    double tmp = floor(num);
    if(num-tmp>=0.5)
        tmp = tmp+1;
    int res = (int)tmp;
    h = res/3600;
    m = (res%3600)/60;
    s = (res%3600)%60;
    printf("%02d:%02d:%02d",h,m,s);
    return 0;
}
