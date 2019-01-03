#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main()
{
    int i,num;
    string str,tmp;
    cin>>str;
    cin>>num;
    getchar();
    for(i=0;i<num;i++)
    {
        getline(cin,tmp);
        if(str==tmp)
        {
            cout<<"Welcome in"<<endl;
            break;
        }
        else if(tmp=="#")
            break;
        else
            cout<<"Wrong password: "+tmp<<endl;
    }
    if(i==num)
        cout<<"Account locked"<<endl;
    system("pause");
    return 0;
}
