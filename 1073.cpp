#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

typedef struct
{
    double value;
    int tnum;
    int cnum;
    char co[5];
    int mcnum[5]={0};
}info;
int findc(char *p,char c)
{
    for(int i=0;i<strlen(p);i++)
        if(p[i]==c)
            return 1;
    return 0;
}
int main()
{
    int n,m;
    int i,j;
    double total;
    int max=0;
    int maxindex[101];
    char c;
    bool isallcor=true;
    cin>>n>>m;
    info p[101];
    for(i=0;i<m;i++)
    {
        cin>>p[i].value>>p[i].tnum>>p[i].cnum;
        for(j=0;j<p[i].cnum;j++)
            cin>>p[i].co[j];
        p[i].co[++j]='\0';
    }
    for(int i=0;i<n;i++)
    {
        total=0.0;
        for(int j=0;j<m;j++)
        {
            int flag=0;
            int tmp;
            char tmpt;
            char* tmpc=new char[tmp];
            scanf(" %c",&tmpt);
            //cout<<tmpt;
            scanf("%d",&tmp);
            //cout<<tmp<<' ';
            for(int k=0;k<tmp;k++)
            {
                scanf(" %c",&tmpc[k]);
                //cout<<tmpc[k]<<' ';
                //cout<<(strchr(p[j].co,tmpc[k])==NULL)<<' ';
                if(findc(p[j].co,tmpc[k])==0)
                {
                    p[j].mcnum[tmpc[k]-'a']++;
                    flag=2;
                }
            }
            for(int z=0;z<p[j].cnum;z++)
            {
                if(findc(tmpc,p[j].co[z])==0)
                    p[j].mcnum[p[j].co[z]-'a']++;
            }
            //cout<<(strstr(p[j].co,tmpc)==NULL)<<' ';
            if((strstr(p[j].co,tmpc)==NULL)&&(flag!=2))
            {
                flag=1;
            }
            //cout<<flag<<endl;
            if(flag==2)
            {
                isallcor=false;
                //printf("0.0--\n");
            }
            else if(flag==1)
            {
                isallcor=false;
                //printf("%.1f--\n",p[j].value/2);
                total+=(p[j].value/2);
            }
            else
            {
                total+=p[j].value;
                //printf("%.1f--\n",p[j].value);
            }
            free(tmpc);
            scanf("%c",&tmpt);
            //cout<<tmpt;
        }
        printf("%.1f\n",total);
    }
    if(isallcor)
        printf("Too simple\n");
    else
    {
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<p[i].tnum;j++)
            {
                if(p[i].mcnum[j]>max)
                {
                    max=p[i].mcnum[j];
                    maxindex[0]=(i+1)*10+j;
                }
            }
        }
        int maxnum=1;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<p[i].tnum;j++)
            {
                if((max==p[i].mcnum[j])&&(((i+1)*10+j)!=maxindex[0]))
                {
                    maxindex[maxnum++]=(i+1)*10+j;
                }
            }
        }
        //cout<<maxnum<<endl;
        for(int i=0;i<maxnum;i++)
        {
            printf("%d %d-%c\n",max,maxindex[i]/10,'a'+(maxindex[i]%10));
        }
    }
    //cout<<p[2].mcnum[1];
    system("pause");
    return 0;
}
