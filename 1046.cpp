#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int n;
    int a1,a2,b1,b2;
    int num1=0;
    int num2=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a1>>a2>>b1>>b2;
        if(a2!=b2)
        {
            if(a1+b1==a2)
                num2++;
            else if(a1+b1==b2)
                num1++;
        }
    }
    cout<<num1<<' '<<num2;
    return 0;
}
