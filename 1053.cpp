#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int n;
    double e;
    int d;
    int t;
    double tmp;
    int b;//blank
    double pb=0;//possibly blank;
    double cb=0;//certainly blank;
    cin>>n>>e>>d;
    for(int i=0;i<n;i++)
    {
        b=0;
        cin>>t;
        for(int j=0;j<t;j++)
        {
            cin>>tmp;
            if(tmp<e)
                b++;
        }
        if(b>t/2&&b>d)
            cb++;
        else if(b>t/2)
            pb++;
    }
    printf("%.1f%% ",pb / n * 100);
    printf("%.1f%%",cb / n * 100);
    return 0;
}
