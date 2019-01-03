#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n;
    int a[10]={0};
    int sum=0;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i]!=a[j]&&a[i]!=0)
                sum+=(a[i]*10+a[j]);
        }
    }
    cout<<sum;
    return 0;
}
