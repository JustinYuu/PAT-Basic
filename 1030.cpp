#include <iostream>
#include <cstdio>
#include <algorithm>
#define LEN 100000
using namespace std;

int comp(const void *a,const void *b)
{
    return *(double*)a - *(double*)b;
}
int main()
{
    int n;
    long long p;
    cin>>n>>p;
    double a[LEN];
    int lower=0;
    int upper=n-1;
    for(int i=0;i<n;i++)
        cin>>a[i];
    qsort(a,n,sizeof(double),comp);
    double* b = new double[n-1];
    for(int i=0;i<n-1;i++)
        b[i]=a[i+1]/a[i];
    while(a[upper]>p*a[lower]&&upper>lower)
        {
            upper--;
            lower++;
            if(a[upper]<=p*a[lower]&&upper>lower)
                b[lower-1]>=b[upper]?upper++:lower--;
        }
    cout<<upper+1-lower;
    return 0;
}
