#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int p[6]={0};       //P A T e s t
    int i,index;
    int tmp=0;
    char c;
    while((c=getchar())!='\n')
    {
        if(c=='P')
            p[0]++;
        else if(c=='A')
            p[1]++;
        else if(c=='T')
            p[2]++;
        else if(c=='e')
            p[3]++;
        else if(c=='s')
            p[4]++;
        else if(c=='t')
            p[5]++;
    }
    for(i=0;i<6;i++)
    {
        if(p[i]>tmp)
        {
            tmp = p[i];
            index = i;
        }
    }
    while(p[index])
    {
        if(p[0])
            {cout<<'P';p[0]--;}
        if(p[1])
            {cout<<'A';p[1]--;}
        if(p[2])
            {cout<<'T';p[2]--;}
        if(p[3])
            {cout<<'e';p[3]--;}
        if(p[4])
            {cout<<'s';p[4]--;}
        if(p[5])
            {cout<<'t';p[5]--;}
    }
    return 0;
}
