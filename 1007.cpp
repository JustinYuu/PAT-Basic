#include <iostream>
#include <cstdio>
#include <math.h>
#define LEN 50000
using namespace std;
bool isPrime(int n){
 if(n == 2)
    return true;
 if(n <= 1 || n%2 == 0)
    return false;
for(int i = 3; i <= sqrt(n); i+=2){
  if(n%i == 0)
    return false;
}
    return true;
}
int main(void)
{
    int n;
    int a[LEN];
    int tmp(-1);
    int num(0);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(isPrime(i))
        {
            if((i-tmp)==2)
                num++;
            tmp = i;
        }
    }
    cout<<num;
    return 0;
}
