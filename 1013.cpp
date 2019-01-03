#include <iostream>
#include <cstdio>
#include <math.h>
#define LEN 10000
using namespace std;
bool isPrime(int n)
{
    if(n==2)
        return true;
    if(n<=1||n%2==0)
        return false;
    for(int i=3;i<=sqrt(n);i+=2)
    {
        if(n%i==0)
            return false;
    }
    return true;
}
int main(void)
{
    int num(0);
    int p[LEN];
    int k(0);
    int pstart,pend;
    cin>>pstart>>pend;
    for(int i=1;k<10000;i++)
    {
        if(isPrime(i))
        {
            p[k++]=i;
        }
    }
    for(int j=pstart;j<=pend;j++)
    {
        num++;
        if(num%10==0||j==pend)
            cout<<p[j-1]<<endl;
        else
            cout<<p[j-1]<<' ';
    }
    return 0;
}
