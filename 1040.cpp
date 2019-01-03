#include<iostream>
#include<string>
using namespace std;

int main()
{
    long long sum = 0;
    string list;
    getline(cin, list);
    for (int i = 0,p=0,a=0; i < list.size(); ++i)
    {
        if (list[i] == 'P')
        {
            ++p;
        }
        if (list[i] == 'A')
        {
            a += p;
        }
        if (list[i] == 'T')
        {
            sum += a;
        }
    }
    sum %= 1000000007;
    cout << sum << endl;
    return 0;
}
