#include <iostream>
using namespace std;

int main()
{
    int n,a1,a2,b1,b2,ac=0,bc=0;
    cin>>n;
    for(int i=0;i<n;++i)
    {
        cin>>a1>>a2>>b1>>b2;
        if(a2!=b2)
        {
            if(a1+b1==a2)
                bc++;
            else if(a1+b1==b2)
                ac++;
        }
    }
    cout<<ac<<' '<<bc;
    return 0;
}
