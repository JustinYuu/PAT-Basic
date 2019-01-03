#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

typedef struct Node
{
    int addr;
    int nextaddr;
    int data;
}Node;
int main()
{
    int n,k;
    int firstaddr,next;
    int count=0;
    int q[100001];
    Node a,p[100001];
    vector <Node> Order;
    cin>>firstaddr>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>a.addr>>a.data>>a.nextaddr;
        p[a.addr]=a;
    }
    next = firstaddr;
    while(next!=-1)
    {
        if(p[next].data<0)
        {
            q[count++]=p[next].addr;
            Order.push_back(p[next]);
        }
        next = p[next].nextaddr;
    }
    next = firstaddr;
    while(next!=-1)
    {
        if(p[next].data<=k&&p[next].data>=0)
        {
            q[count++]=p[next].addr;
            Order.push_back(p[next]);
        }
        next = p[next].nextaddr;
    }
    next = firstaddr;
    while(next!=-1)
    {
        if(p[next].data>k)
        {
            q[count++]=p[next].addr;
            Order.push_back(p[next]);
        }
        next = p[next].nextaddr;
    }
    for(int i=0;i<Order.size();i++)
    {
        if(i==Order.size()-1)
            printf("%05d %d -1",Order[i].addr,Order[i].data);
        else
            printf("%05d %d %05d\n",Order[i].addr,Order[i].data,q[i+1]);
    }
    return 0;
}
