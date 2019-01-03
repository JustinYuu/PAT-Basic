#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

typedef struct
{
    char id[13];
    int sc;
}PAT;
int cmp(PAT a,PAT b)
{
    if(a.sc>b.sc)
        return 1;
    else if(a.sc<b.sc)
        return 0;
    else
        return a.id<b.id;
}
void op1(char type,PAT p[],int n)
{
    int j=0;
    PAT tmp[j+1];
    for(int i=0;i<n;++i)
    {
        if(p[i].id[0]==type)
            tmp[j++]=p[i];
    }
    sort(tmp,tmp+j,cmp);
    if(j==0)
        cout<<"NA"<<endl;
    else
    {
        for(int i=0;i<j;++i)
            cout<<tmp[i].id<<' '<<tmp[i].sc<<endl;
    }
}
void op2(int num,PAT p[],int n)
{
    int count=0;
    int sum=0;
    for(int i=0;i<n;++i)
    {
        if((p[i].id[1]-'0')*100+(p[i].id[2]-'0')*10+(p[i].id[3]-'0')==num)
        {
            count++;
            sum+=p[i].sc;
        }
    }
    if(count==0)
        cout<<"NA"<<endl;
    else
        cout<<count<<' '<<sum<<endl;
}
bool iszero(int q[])
{
    for(int i=100;i<1000;++i)
        if(q[i]!=0)
            return 0;
    return 1;
}
void op3(int date,PAT p[],int n)
{
    int q[1000]={0};
    int loc;
    for(int i=0;i<n;++i)
    {
        if((p[i].id[4]-'0')*100000+(p[i].id[5]-'0')*10000+(p[i].id[6]-'0')*1000+(p[i].id[7]-'0')*100+(p[i].id[8]-'0')*10+(p[i].id[9]-'0')==date)
            q[(p[i].id[1]-'0')*100+(p[i].id[2]-'0')*10+(p[i].id[3]-'0')]++;
    }
    int max,index;
    if(iszero(q))
    {
        cout<<"NA"<<endl;
        return;
    }
    while(!iszero(q))
    {
        index=-1;
        max=0;
        for(int i=100;i<1000;++i)
        {
            if(q[i]>max)
            {
                max=q[i];
                index=i;
            }
        }
        q[index]=0;
        cout<<index<<' '<<max<<endl;
    }
}
int main()
{
    int n,m,t;
    char ty;
    int nu;
    int da;
    cin>>n>>m;
    PAT p[n];
    for(int i=0;i<n;++i)
        cin>>p[i].id>>p[i].sc;
    for(int i=1;i<=m;++i)
    {
        cin>>t;
        cout<<"Case "<<i<<": "<<t<<' ';
        switch(t)
        {
            case 1:
                cin>>ty;
                cout<<ty<<endl;
                op1(ty,p,n);
                break;
            case 2:
                cin>>nu;
                cout<<nu<<endl;
                op2(nu,p,n);
                break;
            case 3:
                cin>>da;
                cout<<da<<endl;
                op3(da,p,n);
                break;
            default:
                cout<<"NA"<<endl;
                break;
        }
    }
    return 0;
}
