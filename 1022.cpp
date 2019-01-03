#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int a,b,d,n;
    int i=0;
    int res[100]={0};
    cin>>a>>b>>d;
    a = a+b;
    if(a==0)
        cout<<0;
    while(a!=0)
    {
        res[i++]=a%d;
        a=a/d;
    }
    for(int j=i;j<100;j++)
    {
        res[j] = -1;
    }
    for(int i=99;i>=0;i--)
    {
        if(res[i]!=-1)
            cout<<res[i];
    }
    return 0;
}

