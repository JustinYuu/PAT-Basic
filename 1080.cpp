#include<iostream>
#include<map>
#include<string>
#include<algorithm>
using namespace std;

struct there {
    int p;
    int m;
    int n;
    int g;
    there() {
        p=m=n=g=-1;
    }
    void bb() {
        if(p<200) g=-1;
        else if(m>n) g=(int)(m*0.4+n*0.6+0.5);
        else g=n;
    }
} a;

struct beginn {
    string s;
    there t;
} l[30009];

int cmp(beginn c,beginn b)
{
    if(c.t.g==b.t.g) return c.s<b.s;
    return c.t.g>b.t.g;
}
int main() {
    map<string,there> mp;
    map<string,there>::iterator it;
    string s;
    int p,m,n,k;
    cin>>p>>m>>n;
    for(int i=0; i<p; i++) {
        cin>>s>>k;
        mp[s].p=k;
    }
    for(int i=0; i<m; i++) {
        cin>>s>>k;
        mp[s].m=k;
    }
    for(int i=0; i<n; i++) {
        cin>>s>>k;
        mp[s].n=k;
        mp[s].bb();
    }
    int index=0;
    for(it = mp.begin();it!=mp.end();it++)
    {
        l[index].s=it->first;
        l[index++].t=it->second;
    }

    sort(l,l+index,cmp);
    for(int i=0;i<index;i++)
    {
        if(l[i].t.g>=60) cout<<l[i].s<<" "<<l[i].t.p<<" "<<l[i].t.m<<" "<<l[i].t.n<<" "<<l[i].t.g<<endl;
    }
    return 0;
}
