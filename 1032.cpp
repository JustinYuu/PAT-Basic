#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int index;
    int score;
    int* p = new int[n+1];
    for(int i=0;i<=n;i++)
        p[i]=0;
    for(int i=0;i<n;i++)
    {
        cin>>index>>score;
        p[index]+=score;
    }
    score = -1;
    index = 0;
    for(int i=1;i<=n;i++)
    {
        if(p[i]>score)
        {
            score=p[i];
            index=i;
        }
    }
    cout<<index<<' '<<score;
    return 0;
}
