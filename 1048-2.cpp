#include <iostream>
#include <cstdio>
#include <stack>

using namespace std;

int main()
{
    stack<char> s1,s2;
    stack<int>s3;
    char c,d;
    int r,n=0;
    while((c=getchar())!=' ')
        s1.push(c);
    while((c=getchar())!='\n')
        s2.push(c);
    while(!s2.empty()&&!s1.empty())
    {
        c=s1.top();
        d=s2.top();
        s1.pop();
        s2.pop();
        if(++n%2)
        {
            r=(c-'0'+d-'0')%13;
            s3.push(r);
        }
        else
        {
            r=d-c;
            if(r<0)
                r+=10;
            s3.push(r);
        }
    }
    while(!s2.empty())
    {
        s3.push(s2.top()-'0');
        s2.pop();
    }
    while(!s3.empty())
    {
        if(s3.top()==10)
            cout<<'J';
        else if(s3.top()==11)
            cout<<'Q';
        else if(s3.top()==12)
            cout<<'K';
        else
            cout<<s3.top();
        s3.pop();
    }
    return 0;
}
