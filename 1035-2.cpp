#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int i,n,j,tmp;
    cin>>n;
    int* p=new int[n];
    int* q=new int[n];
    for(int i=0;i<n;++i)
        cin>>p[i];
    for(int i=0;i<n;++i)
        cin>>q[i];
    i=0;
    while(q[i]<=q[i+1])
        i++;
    i++;
    j=i;
    while(q[i]==p[i])
        i++;
    if(i==n)
    {
        cout<<"Insertion Sort"<<endl;
        sort(q,q+j+1);
        cout<<q[0];
        for(int j=1;j<n;j++)
            cout<<' '<<q[j];
    }
    return 0;
}
