#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;
int cmp(const void *a,const void *b)
{
    return *(int*)a-*(int*)b;
}
int main()
{
    int N,count;
    int max=0;
    long long p;
    cin>>N>>p;
    int* r = new int[N];
    for(int i=0;i<N;++i)
        cin>>r[i];
    qsort(r,N,sizeof(int),cmp);
    cout<<r[0];
    for(int i=0;i<N;++i)
    {
        count=0;
        if(p*r[i]>r[N-1])
            count=N-i;
        else
            for(int j=i;j<N;++j)
            {
            if(p*r[i]<r[j])
                break;
            else
                count++;
            }
        if(count>max)
            max=count;
    }
    cout<<max;
    return 0;
}
