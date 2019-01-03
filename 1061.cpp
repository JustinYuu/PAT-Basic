#include <cstdio>
#include <iostream>
using namespace std;
typedef struct
{
    int value;
    int ans;
}question;
int main()
{
    int m,n;
    int tmp;
    int score=0;
    cin>>n>>m;
    question* ques = new question[m];
    for(int i=0;i<m;i++)
        cin>>ques[i].value;
    for(int i=0;i<m;i++)
        cin>>ques[i].ans;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>tmp;
            if(tmp==ques[j].ans)
                score+=ques[j].value;
        }
        cout<<score<<endl;
        score=0;
    }
    return 0;
}
