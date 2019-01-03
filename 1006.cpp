#include <iostream>
using namespace std;
int main(void)
{
    int n;
    cin>>n;
    int num_B(0);
    int num_S(0);
    num_B = n/100;
    num_S = n/10%10;
    for(int i=0;i<num_B;i++)
        cout<<'B';
    for(int j=0;j<num_S;j++)
        cout<<'S';
    for(int k=1;k<=n%10;k++)
        cout<<k;
    return 0;
}
