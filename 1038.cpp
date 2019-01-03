#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n;
    int grade;
    int p[101]={0};
    int k;
    int f;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&grade);
        p[grade]++;
    }
    cin>>k;
    for(int i=0;i<k;i++)
    {
        scanf("%d",&f);
        if(i==0)
            printf("%d",p[f]);
        else
            printf(" %d",p[f]);
    }
    return 0;
}
