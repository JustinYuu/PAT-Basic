#include <iostream>
using namespace std;
int comp(char a,char b)
{
    if(a=='J')
    {
        if(b=='J')
            return 0;
        else if(b=='B')
            return 1;
        else
            return -1;
    }
    else if(a=='B')
    {
        if(b=='J')
            return -1;
        else if(b=='C')
            return 1;
        else
            return 0;
    }
    else
    {
        if(b=='C')
            return 0;
        else if(b=='J')
            return 1;
        else
            return -1;
    }
}
int main()
{
    int n;
    cin>>n;
    char a,b;
    int ccount1,bcount1,jcount1;
    int ccount2,bcount2,jcount2;
    ccount1=bcount1=jcount1=0;
    ccount2=bcount2=jcount2=0;
    int c[3]={0};
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        if(comp(a,b)==1)
            {
                c[0]++;
                if(a=='C')
                    ccount1++;
                else if(a=='B')
                    bcount1++;
                else
                    jcount1++;
            }
        else if(comp(a,b)==0)
            c[1]++;
        else
        {
            c[2]++;
            if(b=='C')
                ccount2++;
            else if(b=='B')
                bcount2++;
            else
                jcount2++;
        }
    }
    cout<<c[0]<<' '<<c[1]<<' '<<c[2]<<endl;
    cout<<c[2]<<' '<<c[1]<<' '<<c[0]<<endl;
    if(ccount1>bcount1&&ccount1>=jcount1)
        cout<<"C ";
    else if(bcount1>=ccount1&&bcount1>=jcount1)
        cout<<"B ";
    else
        cout<<"J ";
    if(ccount2>bcount2&&ccount2>=jcount2)
        cout<<"C";
    else if(bcount2>=ccount2&&bcount2>=jcount2)
        cout<<"B";
    else
        cout<<"J";
    return 0;
}
