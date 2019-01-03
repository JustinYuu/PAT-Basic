#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n,tn,mm,g,maxn,index;
    int p[10001]={0};
    cin>>n;
    for(int i=0;i<n;++i)
    {
        scanf("%d-%d %d",&tn,&mm,&g);
        p[tn]+=g;
    }
    maxn=0;
    for(int i=0;i<10001;++i)
    {
        if(maxn<p[i])
        {
            maxn=p[i];
            index=i;
        }
    }
    cout<<index<<' '<<maxn;
    return 0;
}
