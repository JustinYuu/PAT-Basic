#include <iostream>
#include <cstdio>
#include <math.h>
using namespace std;
bool isPrime(int i)
{
    if(i==2)
        return true;
    else if(i==1)
        return false;
    else
    {
        for(int j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)
                return false;
        }
        return true;
    }
}
int main()
{
    int n,k;
    int tmp;
    cin>>n;
    int p[10001]={0};
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&tmp);
        if(i==1)
            p[tmp]=1;
        else if(isPrime(i))
            p[tmp]=2;
        else
            p[tmp]=3;
    }
    cin>>k;
    for(int i=0;i<k;i++)
    {
        scanf("%d",&tmp);
        if(i!=k-1)
        {
            if(p[tmp]==1)
            {
                printf("%04d: Mystery Award\n",tmp);
                p[tmp]=-1;
            }
            else if(p[tmp]==2)
            {
                printf("%04d: Minion\n",tmp);
                p[tmp]=-1;
            }
            else if(p[tmp]==3)
            {
                printf("%04d: Chocolate\n",tmp);
                p[tmp]=-1;
            }
            else if(p[tmp]==0)
                printf("%04d: Are you kidding?\n",tmp);
            else
                printf("%04d: Checked\n",tmp);
        }
        else
        {
            if(p[tmp]==1)
            {
                printf("%04d: Mystery Award",tmp);
                p[tmp]=-1;
            }
            else if(p[tmp]==2)
            {
                printf("%04d: Minion",tmp);
                p[tmp]=-1;
            }
            else if(p[tmp]==3)
            {
                printf("%04d: Chocolate",tmp);
                p[tmp]=-1;
            }
            else if(p[tmp]==0)
                printf("%04d: Are you kidding?",tmp);
            else
                printf("%04d: Checked",tmp);
        }
    }
    return 0;
}
