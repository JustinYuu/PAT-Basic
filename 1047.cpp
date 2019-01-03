#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n;
    int tmp=0;
    int index=0;
    int p[20000]={0};
    int tnum,pnum,grade;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        scanf("%d-%d %d",&tnum,&pnum,&grade);
        p[tnum]+=grade;
        if(p[tnum]>tmp)
        {
            tmp = p[tnum];
            index = tnum;
        }
    }
    printf("%d %d",index,p[index]);
    return 0;
}
