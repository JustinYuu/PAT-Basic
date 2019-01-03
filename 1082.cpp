#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
using namespace std;

int main()
{
    int n;
    double x,y;
    int num;
    double dis[10001];
    int maxi,mini;
    double maxt,mint;
    memset(dis,-1,10001);
    cin>>n;
    maxt=-1;
    mint=200;
    maxi=mini=-1;
    for(int i=0;i<n;i++)
    {
        cin>>num;
        cin>>x>>y;
        dis[num]=sqrt(pow(x,2)+pow(y,2));
        if(dis[num]>maxt)
        {
            maxt=dis[num];
            maxi=num;
        }
        if(dis[num]<mint)
        {
            mint=dis[num];
            mini=num;
        }
    }
    printf("%04d %04d",mini,maxi);
    return 0;
}
