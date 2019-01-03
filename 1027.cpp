#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    char c;
    int n;
    int i(1);
    int k(1);
    cin>>n>>c;
    while((k+2*(i+2))<=n)
    {
        i+=2;
        k=k+2*i;
    };
    int num = i;
    int res = n-k;
    while(i>=1)
    {
        if(i<num)
        {
            for(int j=0;j<(num-i)/2;j++)
                cout<<' ';
        }
        for(int j=i;j>0;j--)
            cout<<c;
        printf("\n");
        i-=2;
    }
    i+=2;
    while(i<num)
    {
        i += 2;
        if(i<num)
        {
            for(int j=0;j<(num-i)/2;j++)
                cout<<' ';
        }
        for(int j=i;j>0;j--)
            cout<<c;
        printf("\n");
    }
    cout<<res;
    return 0;
}
