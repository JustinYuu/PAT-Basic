#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

typedef struct
{
    int gp,gm,gf,g;
}info;
map<string,info> Map;
typedef pair<string,info>PAIR;

int comp(const PAIR& p1,const PAIR& p2)
{
    if(p1.second.g>p2.second.g)
        return 1;
    else if(p1.second.g==p2.second.g)
    {
        if(p1.first<p2.first)
            return 1;
        else
            return 0;
    }
    return 0;
}

int main()
{
    int P,M,N;
    string name;
    cin>>P>>M>>N;
    for(int i=0;i<P;i++)
    {
        cin>>name;
        cin>>Map[name].gp;
        Map[name].gm=Map[name].gf=Map[name].g=-1;
    }
    for(int i=0;i<M;i++)
    {
        cin>>name;
        cin>>Map[name].gm;
        if(Map[name].g!=-1)
            Map[name].gp = Map[name].gf=Map[name].g=-1;
    }
    for(int i=0;i<N;i++)
    {
        cin>>name;
        cin>>Map[name].gf;
        if(Map[name].g!=-1)
            Map[name].gp = Map[name].gm=Map[name].g=-1;
    }
    map<string,info>::iterator it;
    it = Map.begin();
    while(it!=Map.end())
    {
        if(it->second.gp>=200)
        {
            if(it->second.gm>it->second.gf)
                it->second.g=round(it->second.gm*0.4+it->second.gf*0.6);
            else
                it->second.g=it->second.gf;
        }
        it++;
    }
    vector<PAIR> vs(Map.begin(),Map.end());
    sort(vs.begin(),vs.end(),comp);
    for(int i=0;i<vs.size();i++)
    {
        if(vs[i].second.g>=60)
            cout<<vs[i].first<<" "<<vs[i].second.gp<<" "<<vs[i].second.gm<<" "<<vs[i].second.gf<<" "<<vs[i].second.g<<endl;
    }
    return 0;
}
