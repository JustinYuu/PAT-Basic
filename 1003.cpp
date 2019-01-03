#include <iostream>
#include <string>
using namespace std;
void Algo_1003(string a);
int main(void)
{
    int i,num;
    cin>>num;
    for(i=0;i<num;i++)
    {
        string a;
        cin>>a;
        Algo_1003(a);
    }
    return 0;
}

void Algo_1003(string a)
{
    int i,P_pos,T_pos,pnum,tnum;
    int flag(0);
    i=0;
    pnum = tnum = 0;
    P_pos = T_pos = 0;
    for(i=0;i<a.length();i++)
    {
        if(a[i]=='P')
        {
            P_pos = i;
            pnum++;
        }
        else if(a[i]=='T')
        {
            T_pos = i;
            tnum++;
            break;
        }
        else if(a[i]!='A')
            flag=1;;
    }
    if(flag==0&&P_pos*(T_pos-P_pos-1)==(a.length()-1-T_pos)&&pnum==1&&tnum==1&&(T_pos-P_pos-1)>=1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
