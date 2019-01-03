#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int res;
    bool flag=false;
    res=a*b;
    int len=0;
    int i=1,j;
    while(res/i>0)
    {
        len++;
        i*=10;
    }
    i=10;
    j=1;
    while(len>0)
    {
        if(flag==true||res%i/j!=0)
        {
            cout<<res%i/j;
            flag=true;
        }
        i*=10;
        j*=10;
        len--;
    }
    return 0;
}
