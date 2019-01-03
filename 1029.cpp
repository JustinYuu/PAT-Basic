#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a;
    string b;
    string c;
    cin>>a>>b;
    int len_a=a.length();
    int len_b=b.length();
    for(int i=0;i<len_a;i++)
    {
        if(a[i]>='a'&&a[i]<='z')
            a[i]-=32;
    }
    for(int i=0;i<len_b;i++)
    {
        if(b[i]>='a'&&b[i]<='z')
            b[i]-=32;
    }
    for(int i=0;i<len_a;i++)
    {
        char ch = a[i];
        int found = b.find(ch);
        if(found==string::npos)
        {
            int flag = c.find(ch);
            if(flag==string::npos)
            {
                c+=ch;
                cout<<ch;
            }
        }
    }
    return 0;
}
