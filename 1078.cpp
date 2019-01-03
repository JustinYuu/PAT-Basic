#include <iostream>
#include <cstdio>
#include <ctype.h>
#include <cstring>
using namespace std;

int main()
{
    char sym;
    int count=1;
    char a[10001];
    cin>>sym;
    getchar();
    cin.getline(a,10001);
    if(sym=='C')
    {
        for(int i=0;i<strlen(a);i++)
        {
            if(a[i+1]!=a[i])
            {
                if(count==1)
                    cout<<a[i];
                else
                {
                    cout<<count<<a[i];
                    count=1;
                }

            }
            else
                count++;
        }
    }
    else
    {
        int i=0;
        while(i<strlen(a))
        {
            if(isdigit(a[i]))
            {
                if(!isdigit(a[i+1]))
                {
                    for(int j=0;j<(a[i]-'0');j++)
                        cout<<a[i+1];
                    i+=2;
                }
                else
                {
                    if(!isdigit(a[i+2]))
                    {
                        for(int j=0;j<(a[i]-'0')*10+(a[i+1]-'0');j++)
                            cout<<a[i+2];
                        i+=3;
                    }
                    else
                    {
                        for(int j=0;j<(a[i]-'0')*100+(a[i+1]-'0')*10+(a[i+2]-'0');j++)
                            cout<<a[i+3];
                        i+=4;
                    }
                }
            }
            else
            {
                if(isdigit(a[i-1]))
                    i++;
                else
                    cout<<a[i++];
            }
        }
    }
    //system("pause");
    return 0;
}
