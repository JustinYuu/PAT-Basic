#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main()
{
    vector <int> t;
    vector <int> a;
    vector <int> b;
    vector <int> r;
    int n;
    int flag=0;
    char c;
    int m=0;
    int i,j,k;
    while((c = getchar()) != '\n')
        t.push_back(int(c-'0'));
    while((c = getchar()) != '\n')
        a.push_back(int(c-'0'));
    while((c = getchar()) != '\n')
        b.push_back(int(c-'0'));
    i=a.size()-1;
    j=b.size()-1;
    k=t.size()-1;
    while((i>=0||j>=0))
    {
        if(i==0&&j==0)
            if(flag==0)
                flag=1;
            else
                break;
        if(t[k]==0)
            t[k]=10;
        n=(a[i]+b[j]+m)%t[k];
        m=(a[i]+b[j]+m)/t[k];
        r.push_back(n);
        if(i>0)
            i--;
        else if(i==0)
            a[0]=0;
        if(j>0)
            j--;
        else if(j==0)
            b[0]=0;
        k--;
    }
    if(m!=0)
        r.push_back(m);
    for(m=r.size()-1;r[m]==0&&m>0;m--)
        ;
    for(n=m;n>=0;n--)
        cout<<r[n];
    return 0;
}
