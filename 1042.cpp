#include <iostream>
#include <cstdio>
#include <ctype.h>
#include <algorithm>
using namespace std;
int comp(const void *a,const void *b)
{
    return *(int*)a-*(int*)b;
}
int main()
{
    int a[200]={0};
    char c;
    int maxv=0;
    char index;
    while((c=getchar())!='\n')
    {
        if(isupper(c))
            c=tolower(c);
        a[c]++;
    }
    for(char i='a';i<'z';i++)
    {
        if(a[i]>maxv)
        {
            maxv = a[i];
            index = i;
        }
    }
    cout<<index<<' '<<a[index];
    return 0;
}
