#include <iostream>
#include <cstdio>
#define LEN 1000
using namespace std;

int main()
{
    int out[LEN]={0};
    char i;
    while((i=getchar())!='\n')
        out[i-'0']++;
    for(int i=0;i<LEN;i++)
    {
        if(out[i]!=0)
            cout<<i<<':'<<out[i]<<endl;
    }
    return 0;
}
