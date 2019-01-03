#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool isdromic(string s)
{
    int i;
    for(i = 0; i < s.size() / 2; i++)
        if(s[i] != s[s.size() - 1 - i])
            return false;
    return true;
}
int main()
{
    string s1, s2;
    int i, j, carry;
    cin >> s1;
    if(isdromic(s1))
    {
        cout << s1 << " is a palindromic number." << endl;
        return 0;
    }
    i = 0;
    while(i < 10)
    {
        int a1, a2;
        string tem = s2 = s1;
        carry = 0;
        reverse(s2.begin(), s2.end());
        for(j = s1.size() - 1; j >= 0; j--)
        {
            a1 = s1[j] - '0';
            a2 = s2[j] - '0';
            tem[j] = (a1 + a2 + carry) % 10 + '0';
            carry = (a1 + a2 + carry) / 10;
        }
        if(carry == 1)
            tem = '1' + tem;
        cout << s1 << " + " << s2 << " = " << tem << endl;
        if(isdromic(tem))
        {
            cout << tem << " is a palindromic number." << endl;
            return 0;
        }
        s1 = tem;
        i++;
    }
    cout << "Not found in 10 iterations." << endl;
    return 0;
}
