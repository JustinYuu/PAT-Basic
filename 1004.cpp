#include <iostream>
#define LEN 20
using namespace std;
typedef struct
{
    char A[LEN];
    char B[LEN];
    int score;
}Stuinfo;
int main(void)
{
    int n;
    int i;
    cin>>n;
    Stuinfo top;
    Stuinfo last;
    last.score=101;
    top.score=-1;
    for(i=0;i<n;i++)
    {
        Stuinfo tmp;
        cin>>tmp.A;
        cin>>tmp.B;
        cin>>tmp.score;
        if(tmp.score>top.score)
            top = tmp;
        if(tmp.score<last.score)
            last = tmp;
    }
    cout<<top.A<<' '<<top.B<<endl;
    cout<<last.A<<' '<<last.B<<endl;
    return 0;
}
