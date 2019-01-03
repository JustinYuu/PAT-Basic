#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
    char p[]={'0','1','2','3','4','5','6','7','8','9','J','Q','K'};
    char a[100];
    char b[100];
    cin>>a;
    cin>>b;
    int i,j,k;
    int tmp;
    int len;
    for(i=0,j=strlen(a)-1;i<j;i++,j--)
    {
        tmp=a[i];
        a[i]=a[j];
        a[j]=tmp;
    }
    for(i=0,j=strlen(b)-1;i<j;i++,j--)
    {
        tmp=b[i];
        b[i]=b[j];
        b[j]=tmp;
    }
    len = max(strlen(a),strlen(b));
    if(strlen(a)<len)
    {
        for(i=strlen(a);i<len;i++)
            a[i]='0';
        a[len]='\0';
    }
    if(strlen(b)<len)
    {
        for(i=strlen(b);i<len;i++)
            b[i]='0';
        b[len]='\0';
    }
    for(i=0;i<len;i++)
    {
        if(i%2==1)
        {
            tmp=b[i]-a[i];
            if(tmp<0)
                tmp+=10;
            b[i]=p[tmp];
        }
        else
        {
            tmp=int(((a[i]-'0')+(b[i]-'0'))%13);
            b[i]=p[tmp];
        }
    }
    for(int i=strlen(b)-1;i>=0;i--)
        cout<<b[i];
    return 0;
}
