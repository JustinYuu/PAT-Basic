#include <cstdio>
int main()
{
    int n;
    int i;
    double sum=0;
    scanf("%d",&n);
    double* p = new double[n];
    for(int i=0;i<n;i++)
        scanf("%lf",&p[i]);
    for(i=0;i<n;i++)
    {
        sum+=p[i]*(n-i)*(i+1);
    }
    printf("%.2f",sum);
    return 0;
}
