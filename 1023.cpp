#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int a[10];
    int index;
    for(int i=0;i<10;i++)
        cin>>a[i];
    for(index = 1;index<10;index++)
    {
        if(a[index]!=0)
        {
            cout<<index;
            a[index]--;
            break;
        }
    }
    for(index = 0;index<10;index++)
    {
        while(a[index])
        {
            cout<<index;
            a[index]--;
        }
    }
    return 0;
}
