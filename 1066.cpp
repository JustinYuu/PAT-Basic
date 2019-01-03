#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int m,n,a,b,g,tmp;
    cin>>m>>n>>a>>b>>g;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&tmp);
            if(tmp>=a&&tmp<=b)
                printf("%03d",g);
            else
                printf("%03d",tmp);
            if(j!=n-1)
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
