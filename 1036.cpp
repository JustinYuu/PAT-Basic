#include <iostream>
#include <cstdio>
#include <math.h>
using namespace std;
int main()
{
    double n;
    double num;
    char c;
    cin>>n>>c;
    num = ceil(n/2);
    for(int i=0;i<n;i++)
        cout<<c;
    printf("\n");
    for(int i=0;i<num-2;i++)
    {
        cout<<c;
        for(int j=1;j<n-1;j++)
            cout<<' ';
        cout<<c<<endl;
    }
    for(int i=0;i<n;i++)
        cout<<c;
}
