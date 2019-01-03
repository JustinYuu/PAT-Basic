#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main()
{
    int n,m,k;
    int a1,a2;
    vector <int> p[100001];
    cin>>n>>m;
    for(int i=0;i<n;++i)
    {
        cin>>a1>>a2;
        p[a1].push_back(a2);
        p[a2].push_back(a1);
    }
    for(int i=0;i<m;++i)
    {
        cin>>k;
        bool flag=false;
        bool q[100001]={0};
        for(int j=0;j<k;++j)
        {
            cin>>a1;
            q[a1]=1;
            for(int r=0;r<p[a1].size();++r)
            {
                if(q[p[a1][r]]==1)
                {
                    flag=true;
                    break;
                }
            }
            if(flag==true)
                break;
        }
        if(flag)
            cout<<"No"<<endl;
        else
            cout<<"Yes"<<endl;
    }
    system("pause");
    return 0;
}
