#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long long a[100001],p,n,temp,maxcount=0;
    cin>>n>>p;
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        temp = upper_bound(a+i+1,a+n,a[i]*p)-a;
        maxcount = max(maxcount,temp-i);
    }
    cout<<maxcount;
    return 0;
}
