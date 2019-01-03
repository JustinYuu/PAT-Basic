#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n,m,tmp;
    int p[1000]={0};
    cin>>n>>m;
    for(int i=1;i<=m;++i)
    {
        for(int j=1;j<=n;++j)
        {
            cin>>tmp;
            p[j]+=tmp;
        }
    }
    int max=p[1],maxindex=1;
    for(int i=1;i<=n;++i)
        if(p[i]>max)
            max=p[i];
    cout<<max<<endl;
    bool flag=true;
    for(int i=1;i<=n;++i)
    {
        if(p[i]==max&&flag==true)
        {
            cout<<i;
            flag=false;
        }
        else if(p[i]==max&&flag==false)
            cout<<' '<<i;
    }
    return 0;
}
