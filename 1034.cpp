#include <cstdio>
#include <cmath>
using namespace std;

void simplify(long long n,long long m)
{
    bool Isneg=false;
    if((n<0&&m>0)||(n>0&&m<0))
        Isneg = true;
    long long a,b;
    a=n=abs(n);
    b=m=abs(m);
    while(a!=b&&a!=0&&b!=0)
    {
        if(a>b)
            a=a-b;
        else
            b=b-a;
    }
    if(a!=1&&a!=0&&b!=0)
    {
        n/=a;
        m/=a;
    }
    if(Isneg==false)
    {
        if(n/m!=0)
        {
            if(n%m)
                printf("%lld %lld/%lld",n/m,n%m,m);
            else
                printf("%lld",n/m);
        }
        else
        {
            if(n%m>0)
                printf("%lld/%lld",n%m,m);
            else
                printf("0");
        }
    }
    else
    {
        if(n/m!=0)
        {
            if(n%m)
                printf("(-%lld %lld/%lld)",n/m,n%m,m);
            else
                printf("(-%lld)",n/m);
        }
        else
        {
            if(n%m>0)
                printf("(-%lld/%lld)",n%m,m);
            else
                printf("0");
        }
    }
    return;
}
int main()
{
    long long a1,a2,b1,b2,c1,c2;
    scanf("%lld/%lld %lld/%lld",&a1,&a2,&b1,&b2);

    simplify(a1,a2);
    printf(" + ");
    simplify(b1,b2);
    printf(" = ");
    c1 = a1*b2+a2*b1;
    c2 = a2*b2;
    simplify(c1,c2);
    printf("\n");

    simplify(a1,a2);
    printf(" - ");
    simplify(b1,b2);
    printf(" = ");
    c1 = a1*b2-a2*b1;
    simplify(c1,c2);
    printf("\n");

    simplify(a1,a2);
    printf(" * ");
    simplify(b1,b2);
    printf(" = ");
    c1 = a1*b1;
    c2 = a2*b2;
    simplify(c1,c2);
    printf("\n");

    simplify(a1,a2);
    printf(" / ");
    simplify(b1,b2);
    printf(" = ");
    c1 = a1*b2;
    c2 = a2*b1;
    if(c2==0)
        printf("Inf");
    else
        simplify(c1,c2);
    return 0;
}
