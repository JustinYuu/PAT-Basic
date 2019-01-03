#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
void comp(int a,int b)
{
    if(a<b)
        cout<<' '<<"Cong";
    else if(a==b)
        cout<<' '<<"Ping";
    else
        cout<<' '<<"Gai";
}
void comp1(int a,double b)
{
    if((double)a<b)
        cout<<' '<<"Cong";
    else if((double)a==b)
        cout<<' '<<"Ping";
    else
        cout<<' '<<"Gai";
}
int main()
{
    int m,a,b;
    int x,y;
    double c;
    cin>>m>>x>>y;
    for(int i=9;i>0;--i)
    {
        for(int j=9;j>=0;--j)
        {
            if(abs(i-j)*9*y==x*(10*j+i))
            {
                a=10*i+j;
                b=10*j+i;
                c=(double)b/y;
                cout<<a;
                comp(m,a);
                comp(m,b);
                comp1(m,c);
                return 0;
            }
        }
    }
    cout<<"No Solution";
    return 0;
}
