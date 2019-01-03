#include <iostream>
using namespace std;
int main()
{
  int n,t;
  cin>>n>>t;
  int* a=new int[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[(i+t)%n];
  }
  cout<<a[0];
  for(int i=1;i<n;i++)
  {
    cout<<" "<<a[i];
  }

  return 0;
}
