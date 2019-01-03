#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int p[100001];
int singledog[10001];
int main()
{
    int n,m;
    int tmp1,tmp2;
    int dogcount=0;
    fill(p,p+10001,-1);
    cin>>n;
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&tmp1,&tmp2);
        p[tmp1]=tmp2;
        p[tmp2]=tmp1;
    }
    cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>tmp1;
        p[tmp1]+=200000;
    }
    for(int i=0 ;i<100001;i++)
    {
        if(p[i]==199999)
            singledog[dogcount++]=i;
        else if(p[i]>=200000&&p[i]<=299999&&p[p[i]-200000]<=99999)
            singledog[dogcount++]=i;
    }
    sort(singledog,singledog+dogcount);
    printf("%d\n", dogcount);
	for (int i = 0; i < dogcount; i++) {
		printf("%05d", singledog[i]);
		if (i != dogcount - 1)
			printf(" ");
	}
    return 0;
}
