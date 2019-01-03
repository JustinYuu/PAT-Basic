#include <cstdio>
#include <iostream>
using namespace std;
int findmaxindex(double *c,int n);
int main()
{
    int n,d,index;
    double res;
    cin>>n>>d;
    double* a = new double[n];    //库存
    double* b = new double[n];    //总售价
    double* c = new double[n];    //权重
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
        c[i]=b[i]/a[i];
    }
    index = findmaxindex(c,n);
    while(d>a[index]&&c[index]!=0)
    {
        res += b[index];
        d -= a[index];
        c[index] = 0;
        index = findmaxindex(c,n);
    }
    res += c[index]*d;
    printf("%.2f",res);
    return 0;
}
int findmaxindex(double *c,int n)
{
    double tmp = c[0];
    int index = 0;
    for(int i=1;i<n;i++)
    {
        if(c[i]>tmp)
        {
            tmp = c[i];
            index = i;
        }
    }
    return index;
}
