#include <iostream>
#include <string>

using namespace std;

int main()
{
    int c,e;
    bool flag=true;
    while(cin>>c>>e)
    {
        if(c*e)
        {
            if(flag)
            {
                cout<<c*e<<' '<<e-1;
                flag=false;
            }
            else
                cout<<' '<<c*e<<' '<<e-1;
        }
    }
    if(flag)
        cout<<"0 0";
    return 0;
}
