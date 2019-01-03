#include <iostream>
#include <string>
#include <cstdio>
using namespace std;
typedef struct
{
    string p;
    bool flag;
}lis;
int main()
{
    int m,n,s;
    lis list[1001];
    cin>>m>>n>>s;
    for(int i=1;i<=m;i++)
    {
        cin>>list[i].p;
        list[i].flag=0;
    }
    if(s>m)
        cout<<"Keep going..."<<endl;
    else
    {
        cout<<list[s].p;
        for(int i=s;i<m;i++)
        {
            if(list[i].p==list[s].p)
                list[i].flag=1;
        }
        s+=n;
        while(s<=m)
        {
            if(list[s].flag==0)
            {
                printf("\n");
                cout<<list[s].p;
                for(int i=s;i<m;i++)
                {
                    if(list[i].p==list[s].p)
                        list[i].flag=1;
                }
                s+=n;
            }
            else
                s++;
        }
    }
    return 0;
}
