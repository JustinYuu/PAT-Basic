#include <iostream>
#include <cstdio>
#include <algorithm>
#include <math.h>
using namespace std;
int comp1(const void *a,const void *b)
{
    return *(int*)a -*(int*)b;
}
int comp2(const void *a,const void *b)
{
    return *(int*)b -*(int*)a;
}
int main()
{
    int n;
    int a[4];
    int b[4];
    double tmp;
    int nmax(0),nmin(0);
    cin>>n;
    do
    {
        nmax = nmin =0;
        for(int i=0;i<4;i++)
            {
                a[i]=n/pow(10,i);  // 数组的存储顺序是个十百千
                a[i]=a[i]%10;
                b[i]=a[i];
            }
        if(a[0]==a[1]&&a[0]==a[2]&&a[0]==a[3])
        {
            printf("%d - %d = 0000",n,n);
            return 0;
        }
        qsort(a,4,sizeof(a[0]),comp1);
        qsort(b,4,sizeof(b[0]),comp2);
        for(int i=0;i<4;i++)
        {
            tmp = pow(10,i);
            nmax += a[i]*tmp;
            nmin += b[i]*tmp;
        }
        n = nmax - nmin;
        printf("%.4d - %.4d = %.4d\n",nmax,nmin,n);
    }while(n!=6174);
    return 0;
}
