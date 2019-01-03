#include <stdio.h>

int Algo_1001(int n);
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",Algo_1001(n));
    return 0;
}
int Algo_1001(int n)
{
    int count;
    count = 0;
    if(n>1000||n<=0)
        return 0;
    while(n!=1)
    {
        if(n%2==0)
            n=n/2;
        else
            n=(3*n+1)/2;
        count++;
    }
    return count;
}
