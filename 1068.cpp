#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int x,y;
    long long tol;
    int flag=0;
    long long tmp;
    int a,b;
    cin>>x>>y>>tol;
    long long p[y][x]={0};
    for(int i=0;i<y;i++)
    {
        for(int j=0;j<x;j++)
        {
            scanf("%lld",&p[i][j]);
        }
    }
    for(int i=1;i<y-1;i++)
    {
        for(int j=1;j<x-1;j++)
        {
            if((p[i][j]-p[i-1][j]>tol)&&(p[i][j]-p[i+1][j]>tol)&&(p[i][j]-p[i][j+1]>tol)&&(p[i][j]-p[i][j-1]>tol)
&&(p[i][j]-p[i-1][j-1]>tol)&&(p[i][j]-p[i+1][j-1]>tol)&&(p[i][j]-p[i-1][j+1]>tol)&&(p[i][j]-p[i+1][j+1]>tol))
                {flag++;b=i+1;a=j+1;tmp=p[i][j];}
            if(flag==2)
                break;
        }
    }
    if(flag==1)
        printf("(%d, %d): %lld",a,b,tmp);
    else if(flag==2)
        printf("Not Unique");
    else
        printf("Not Exist");
    return 0;
}
