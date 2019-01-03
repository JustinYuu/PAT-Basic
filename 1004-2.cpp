#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
int main()
{
    int n;
    string name,id;
    int gra;
    int max=-1,min=101;
    string maxname,maxid,minname,minid;
    cin>>n;
    for(int i=0;i<n;++i)
    {
        cin>>name>>id>>gra;
        if(gra<min)
        {
            min=gra;
            minname=name;
            minid=id;
        }
        if(gra>max)
        {
            max=gra;
            maxname=name;
            maxid=id;
        }
    }
    cout<<maxname<<' '<<maxid<<endl;
    cout<<minname<<' '<<minid;
    return 0;
}
