#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int n1,b,t,n2;
    int T,k;
    int i;
    bool flag;
    cin>>T>>k;
    for(i=0;i<k;i++)
    {
        cin>>n1>>b>>t>>n2;
        if(t>T)
        {
            cout<<"Not enough tokens.  Total = "<<T<<'.'<<endl;
            continue;
        }
        if(b==0)
            flag=(n1<n2?false:true);
        else
            flag=(n1<n2?true:false);
        if(flag)
        {
            T+=t;
            printf("Win %d!  Total = %d.\n",t,T);
        }
        else
        {
            T-=t;
            printf("Lose %d.  Total = %d.\n",t,T);
        }
        if(T==0)
        {
            printf("Game Over.");
            break;
        }
    }
    system("pause");
    return 0;
}
