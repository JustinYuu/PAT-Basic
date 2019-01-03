#include <iostream>
#include <cstdio>
#define LEN 3

using namespace std;

int main(void)
{
    int n;
    long a[LEN];
    cin>>n;
    bool *b = new bool[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[0]>>a[1]>>a[2];
        if(a[0]+a[1]>a[2])
            b[i]=true;
        else
            b[i]=false;
    }
    for(int j=0;j<n;j++)
    {
        if(b[j]==true)
            printf("Case #%d: true\n",j+1);
        else
            printf("Case #%d: false\n",j+1);
    }
    return 0;
}
