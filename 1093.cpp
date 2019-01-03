#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
    bool p[127]={0};
    char c;
    while(c=getchar())
    {
        if(c=='\n'&&p['\n']==1)
            break;
        if(p[c]==0)
        {
            p[c]=1;
            if(c!='\n')
                cout<<c;
        }
    }
    //getchar();
    return 0;
}
