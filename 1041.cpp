#include <iostream>
#include <string>
#include <cstdio>
using namespace std;
typedef struct
{
    string s;
    int t;      //test
    int e;      //exam
}Info;
int main()
{
    int n,m,num;
    cin>>n;
    Info* p = new Info[n];
    for(int i=0;i<n;i++)
        cin>>p[i].s>>p[i].t>>p[i].e;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>num;
        for(int j=0;j<n;j++)
        {
            if(p[j].t==num)
                cout<<p[j].s<<' '<<p[j].e<<endl;
        }
    }
    return 0;
}
