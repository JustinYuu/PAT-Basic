#include <iostream>
#include <cstdio>
using namespace std;
int main(void)
{
    int num;
    int tmp;
    int count2(0);
    int count4(0);
    int res[5]={0};
    cin>>num;
    int *a = new int[num];
    for(int i=0;i<num;i++)
    {
        cin>>a[i];
        tmp = a[i]%5;
        if(tmp==0)
        {
            if(a[i]%2==0)
                res[0]+=a[i];
        }
        else if(tmp==1)
        {
            count2++;
            if(count2%2)
                res[1]+=a[i];
            else
                res[1]-=a[i];
        }
        else if(tmp==2)
            res[2]++;
        else if(tmp==3)
        {
            count4++;
            res[3]+=a[i];
        }
        else
        {
            if(a[i]>res[4])
                res[4]=a[i];
        }
    }
    if(res[0]!=0)
        cout<<res[0]<<' ';
    else
        cout<<"N ";
    if(res[1]==0)
    {
        if(count2)
            cout<<res[1]<<' ';
        else
            cout<<"N ";
    }
    else
        cout<<res[1]<<' ';
    if(res[2]!=0)
        cout<<res[2]<<' ';
    else
        cout<<"N ";
    if(res[3]!=0)
        printf("%.1f ",(double)res[3]/count4);
    else
        cout<<"N ";
    if(res[4]!=0)
        cout<<res[4];
    else
        cout<<'N';
}
