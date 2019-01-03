#include<cstdio>
#include<cstring>

int main()
{
    char strPAT[100010];
    gets(strPAT);

    int istr=strlen(strPAT),numAT=0,numPAT=0,num=0;
    while(istr--)
    {
        if('T'==strPAT[istr]) numAT++;
        else if('A'==strPAT[istr]) numPAT+=numAT;
        else
        { // if('P'==strPAT[istr])
             num+=numPAT;
             num%=1000000007;
        }
    }
    printf("%d",num);
    return 0;
}
