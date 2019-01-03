#include <cstdio>
#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
using namespace std;

typedef struct
{
    string idnum;
    double score;
    string sch;
    char type;
}info;
typedef struct
{
    string sch1;
    double total=0.0;
    int stunum=0;
    int rank;
}scoinfo;
int comp(scoinfo a,scoinfo b)
{
    if(floor(a.total)>floor(b.total))
        return 1;
    else if(floor(a.total)<floor(b.total))
        return 0;
    else
    {
        if(a.stunum>b.stunum)
            return 0;
        else if(a.stunum<b.stunum)
            return 1;
        else
            return a.sch1<b.sch1;
    }
}
int main()
{
    int i;
    int n=0;
    int num;
    cin>>num;
    info p;
    int flag;
    scoinfo tmp;
    vector<scoinfo> q;
    while(n<num)
    {
        flag=1;
        cin>>p.idnum;scanf("%lf",&p.score);cin>>p.sch;
        p.type=p.idnum[0];
        for(int i=0;i<(p.sch).length();++i)
            p.sch[i]=tolower(p.sch[i]);
        for(i=0;i<q.size();++i)
        {
            if(q[i].sch1==p.sch)
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            tmp.sch1=p.sch;
            q.push_back(tmp);
        }
        if(p.type=='A')
            q[i].total+=p.score;
        else if(p.type=='T')
            q[i].total+=(p.score*1.5);
        else
            q[i].total+=(p.score/1.5);
        q[i].stunum++;
        n++;
    }
    sort(q.begin(),q.end(),comp);
    q[0].rank=1;
    for(i=1;i<q.size();++i)
    {
        if(floor(q[i].total)==floor(q[i-1].total))
            q[i].rank=q[i-1].rank;
        else
            q[i].rank=i+1;
    }
    cout<<q.size()<<endl;
    for(i=0;i<q.size();++i)
    {
        if(i==0)
            cout<<q[i].rank<<' '<<q[i].sch1<<' '<<floor(q[i].total)<<' '<<q[i].stunum;
        else
            cout<<endl<<q[i].rank<<' '<<q[i].sch1<<' '<<floor(q[i].total)<<' '<<q[i].stunum;
    }
    //system("pause");
    return 0;
}
