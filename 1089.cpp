#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int main()
{
    int n;
    int count;
    cin>>n;
    int* p = new int[n+1];
    for(int i=1;i<=n;++i)
        cin>>p[i];
    for(int i=1;i<=n;++i)
    {
        for(int j=i+1;j<=n;++j)
        {
            count=0;
            int* a = new int[n+1];
            int* b = new int[count+1];
            memset(a,1,sizeof(int));
            a[i]=a[j]=-1;
            for(int k=1;k<=n;++k)
                if(p[k]*a[abs(p[k])]<0)
                    b[count++]=k;
            if(count==2&&a[b[0]]==(-a[b[1]]))
            {
                cout<<i<<' '<<j;
                return 0;
            }
        }
    }
    cout<<"No Solution";
    return 0;
}
