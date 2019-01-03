#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main()
{
    int n,m,k;
    int totp=0;
    int toto=0;
    string name;
    int p[15];
    int q[15];
    int r[15];
    cin>>n>>m;
    for(int i=0;i<m;i++)
        cin>>q[i];
    for(int i=0;i<n;i++)
    {
        cin>>name>>k;
        int z=0;
        for(int j=0;j<k;j++)
        {
            cin>>p[j];
            for(int s=0;s<m;s++)
            {
                if(p[j]==q[s])
                {
                    r[z++]=p[j];
                    toto++;
                    break;
                }
            }
        }
        if(z>0)
        {
            z--;
            cout<<name<<":";
            for(int a=0;a<=z;a++)
                printf(" %04d",r[a]);
            totp++;
            printf("\n");
        }
    }
    cout<<totp<<' '<<toto;
    return 0;
}
