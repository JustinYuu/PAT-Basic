#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int comp(int* a,int* b,int n)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]!=b[i])
            return 0;
    }
    return 1;
}
int comp1(const void *a,const void *b)
{
    return *(int*)a-*(int*)b;
}
int main()
{
    int n;
    bool isInser;
    int a[100];
    int b[100];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        cin>>b[i];
    int i=0;
    int j=0;
    isInser = false;
    for(;b[i]<=b[i+1]&&i<n-1;i++)
        ;
    for(j=++i;a[j]==b[j]&&j<n;j++)
        ;
    if(j==n)
        isInser = true;
    if(isInser)
    {
        cout<<"Insertion Sort"<<endl;
        qsort(&a[0],i+1,sizeof(int),comp1);
        cout<<a[0];
        for(int j=1;j<n;j++)
            cout<<' '<<a[j];
    }
    else
    {
        cout<<"Merge Sort"<<endl;
        int unit = 1;
        bool mergetomiddle=false;
        while(!mergetomiddle)
        {
            mergetomiddle = true;
            if(!comp(a,b,n))
                mergetomiddle = false;
            unit *=2;
            for(int i=0;i<n;i+=unit)
            {
                int temp=unit+i;
                if(temp>n)
                    temp = n;
                sort(a+i,a+temp);
            }
        }
        cout<<a[0];
        for(int j=1;j<n;j++)
            cout<<' '<<a[j];
    }
    return 0;
}

