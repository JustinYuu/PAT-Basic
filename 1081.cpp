#include <iostream>
#include <cstdio>
#include <ctype.h>
#include <string>
using namespace std;

int main()
{
    int n;
    string s;
    bool nflag,cflag;
    cin>>n;
    getchar();
    for(int i=0;i<n;i++)
    {
        nflag = cflag =false;
        getline(cin,s);
        if(s.length()<6)
        {
            cout<<"Your password is tai duan le."<<endl;
            continue;
        }
        for(int i=0;i<s.length();i++)
        {
            if(isdigit(s[i]))
                nflag=true;
            if(isalpha(s[i]))
                cflag=true;
            if((!isdigit(s[i]))&&(!isalpha(s[i]))&&(s[i]!='.'))
            {
                cout<<"Your password is tai luan le."<<endl;
                cflag = nflag =false;
                break;
            }
        }
        if(!nflag&&cflag)
            cout<<"Your password needs shu zi."<<endl;
        else if(!cflag&&nflag)
            cout<<"Your password needs zi mu."<<endl;
        else if(cflag&&nflag)
            cout<<"Your password is wan mei."<<endl;
    }
    return 0;
}
