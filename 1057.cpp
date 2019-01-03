#include <cstdio>
#include <string>
#include <iostream>
using namespace std;
int main()
{
    int n;
    int num1=0,num0=0;
    int sum=0;
    string p;
    getline(cin,p);
    for(int i=0;i<p.length();i++)
    {
        if(p[i]<='z' && p[i]>='a')
            sum+=(p[i]-'a')+1;
        else if(p[i]<='Z'&& p[i]>='A')
            sum+=(p[i]-'A')+1;
    }
    while(sum)
    {
        if(sum%2==1)
            num1++;
        else
            num0++;
        sum/=2;
    }
    printf("%d %d",num0,num1);
    return 0;
}
