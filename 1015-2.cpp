#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cstdio>
using namespace std;
typedef struct
{
    int id;
    int de,cai;
}info;
int cmp1(info a,info b)
{
    if(a.de+a.cai>b.cai+b.de)
        return 1;
    else if(a.de+a.cai<b.cai+b.de)
        return 0;
    else
        if(a.de>b.de)
            return 1;
        else if(a.de<b.de)
            return 0;
        else
            return a.id<b.id;
}
int main()
{
    int n,l,h,m;
    vector<info>p1,p2,p3,p4;
    info tmp;
    m=0;
    cin>>n>>l>>h;
    for(int i=0;i<n;++i)
    {
        scanf("%d %d %d",&tmp.id,&tmp.de,&tmp.cai);
        if(tmp.de>=h&&tmp.cai>=h)
            p1.push_back(tmp);
        else if(tmp.de>=h&&tmp.cai<h&&tmp.cai>=l)
            p2.push_back(tmp);
        else
        {
            if(tmp.de>=l&&tmp.cai>=l&&tmp.cai<=tmp.de)
                p3.push_back(tmp);
            if(tmp.de>=l&&tmp.cai>=l&&tmp.cai>tmp.de)
                p4.push_back(tmp);
        }
    }
    sort(p1.begin(),p1.end(),cmp1);
    sort(p2.begin(),p2.end(),cmp1);
    sort(p3.begin(),p3.end(),cmp1);
    sort(p4.begin(),p4.end(),cmp1);
    cout<<p1.size()+p2.size()+p3.size()+p4.size()<<endl;
    for(int i=0;i<p1.size();++i)
        cout<<p1[i].id<<' '<<p1[i].de<<' '<<p1[i].cai<<endl;
    for(int i=0;i<p2.size();++i)
        cout<<p2[i].id<<' '<<p2[i].de<<' '<<p2[i].cai<<endl;
    for(int i=0;i<p3.size();++i)
        cout<<p3[i].id<<' '<<p3[i].de<<' '<<p3[i].cai<<endl;
    for(int i=0;i<p4.size();++i)
        cout<<p4[i].id<<' '<<p4[i].de<<' '<<p4[i].cai<<endl;
    return 0;
}
