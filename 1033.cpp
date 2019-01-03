#include <iostream>
#include <cstdio>
#include <cstring>
#define LEN 100010
using namespace std;

int main()
{
    char a[LEN];
    char b[LEN];
    int lena,lenb;
    cin.getline(a,LEN);
    cin.getline(b,LEN);
    lena = strlen(a);
    lenb = strlen(b);
    for(int i=0;i<lena;i++)
    {
        for(int j=0;j<lenb;j++)
        {
            if(tolower(b[j])==tolower(a[i]))
                b[j]=' ';
            else if(a[i]=='+')
            {
                if(isupper(b[j]))
                    b[j]=' ';
            }
        }
    }
    for(int i=0;i<lenb;i++)
    {
        if(b[i]!=' ')
            cout<<b[i];
    }
    return 0;
}
