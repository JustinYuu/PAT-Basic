#include <cstdio>
#include <stack>
using namespace std;
int main(void)
{
    int sum = 0;
    char j;
    char li[10][5]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    while(~scanf("%c",&j)&& j!='\n')
        sum += j-'0';
    stack<int> stk;
    while(sum)
    {
        stk.push(sum%10);
        sum/=10;
    }
    printf("%s",li[stk.top()]);
    stk.pop();
    while(stk.size())
    {
        printf(" %s",li[stk.top()]);
        stk.pop();
    }
    puts( "" );
    return 0;
}

