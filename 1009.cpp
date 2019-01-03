#include <iostream>
#include <cstdio>
#include <cstring>
#define LEN 200
using namespace std;
int main(void)
{
    int i,k,tmp;
    char str[LEN];
    cin.getline(str,LEN);
    tmp = strlen(str);
    for(i=tmp;i>=0;i--)
    {
        if(str[i]==' '||i==0)
        {
            if(i!=0)
                for(k=i+1;k<tmp+1;k++)
                    cout<<str[k];
            else
                for(k=0;k<tmp;k++)
                    cout<<str[k];
            tmp = i;
        }
    }
    return 0;
}
