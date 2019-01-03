#include <iostream>
#include <cstdio>
#include <math.h>
using namespace std;
int main()
{
    int pg,ps,pk;
    int ag,as,ak;
    int cg,cs,ck;
    long p,a,c;
    scanf("%d.%d.%d %d.%d.%d",&pg,&ps,&pk,&ag,&as,&ak);
    p = pg*29*17+ps*29+pk;
    a = ag*29*17+as*29+ak;
    c = a-p;
    cg = c/17/29;
    cs = (c-cg*17*29)/29;
    ck = c-(cg*17+cs)*29;
    cout<<cg<<'.'<<abs(cs)<<'.'<<abs(ck);
    return 0;
}
