#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main()
{
    int n;
    int total=0;
    string s;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin>>s;
            if(s[2]=='T')
                total=(s[0]-'A'+1);
        }
        cout<<total;
    }
    system("pause");
    return 0;
}
