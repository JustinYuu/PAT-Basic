#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;
int comp(int a,int b)
{
    return (a>b);
}
int main()
{
    int n,i,j,tmp;
    int count;
    int p[10001];
    memset(p,-1,10001);
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>tmp;
        tmp-=(i+1);
        p[i]=abs(tmp);
    }
    sort(p,p+n,comp);
    i=0;
    count=1;
    while(i<n)
    {
        if(p[i]==p[i+1])
        {
            count++;
            i++;
        }
        else
        {
            if(count>1)
                cout<<p[i]<<' '<<count<<endl;
            i++;
            count=1;
        }
    }
    return 0;
}
