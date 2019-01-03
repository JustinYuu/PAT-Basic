#include <cstdio>
int main()
{
    int a[200]={0};
    char c;
    bool isCon=true;
    int num=0;
    int renum=0;
    while((c=getchar())!='\n')
        a[c]++;
    while((c=getchar())!='\n')
        a[c]--;
    for(c='0';c<='z';c++)
    {
        if(a[c]<0)
        {
            isCon=false;
            num+=(-a[c]);
        }
        if(a[c]>0)
            renum+=a[c];
    }
    if(isCon)
        printf("Yes %d",renum);
    else
        printf("No %d",num);
    return 0;
}
