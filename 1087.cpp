#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int count=0;
    int j;
    bool p[100001]={0};
    for(int i=1;i<=n;++i)
    {
        j=floor(i/2)+floor(i/3)+floor(i/5);
        if(p[j]==0)
        {
            count++;
            p[j]=1;
        }
    }
    cout<<count;
    return 0;
}
