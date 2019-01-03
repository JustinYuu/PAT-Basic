#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;
typedef struct
{
    double pr;
    double am;
}mk;
int cmp(mk a,mk b)
{
    return a.pr/a.am>b.pr/b.am;
}
int main()
{
    int n,d;
    double total=0.0;
    cin>>n>>d;
    mk* p = new mk[n];
    for(int i=0;i<n;++i)
        cin>>p[i].am;
    for(int i=0;i<n;++i)
        cin>>p[i].pr;
    sort(p,p+n,cmp);
    for(int i=0;i<n&&d>0;++i)
    {
        if(p[i].am>=d)
        {
            total+=p[i].pr/p[i].am*d;
            break;
        }
        else
        {
            total+=p[i].pr;
            d-=p[i].am;
        }
    }
    printf("%.2f",total);
    return 0;
}
