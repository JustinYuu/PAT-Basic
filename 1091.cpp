#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int m,k;
    int n,res;
    cin>>m;
    for(int i=0;i<m;++i)
    {
        cin>>k;
        for(n=1;n<10;++n)
        {
            res=k*k*n;
            if(res%10==k||res%100==k||res%1000==k)
            {
                cout<<n<<' '<<res<<endl;
                break;
            }
        }
        if(n==10)
            cout<<"No"<<endl;
    }
    return 0;
}
