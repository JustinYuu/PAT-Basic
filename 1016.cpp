#include <iostream>
#include <cstdio>
#include <cstring>
#include <math.h>
using namespace std;
int main()
{
    char a[12],b[12];
    int n,m;
    int coef(0);
    int res(0);
    scanf("%s %d %s %d",a,&n,b,&m);
    for(int i=0;i<strlen(a);i++)
    {
        if((int)(a[i]-'0') == n)
        {
            res += n*pow(10,coef);
            coef++;
        }
    }
    coef = 0;
    for(int i=0;i<strlen(b);i++)
    {
        if((int)(b[i]-'0') == m)
        {
            res += m*pow(10,coef);
            coef++;
        }
    }
    cout<<res;
    return 0;
}
