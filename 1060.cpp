#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int comp(const void *a,const void *b)
{
    return *(int*)b-*(int*)a;
}
int main()
{
    int k=0;
    int n;
    cin>>n;
    int p[100001]={0};
    for(int i=0;i<n;i++)
        cin>>p[i];
    qsort(p,n,sizeof(p[0]),comp);
    for(;k<n;k++)
    {
        if(p[k]<=k+1)
            break;
    }
    cout<<k;
    return 0;
}
