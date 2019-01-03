#include <iostream>
#include <cstdio>
#define LEN 60
using namespace std;
int main(void)
{
    int i,j;
    char p[4][LEN];
    for(int i=0;i<4;i++)
        cin>>p[i];
    for(i=0;i<LEN;i++)
    {
        if((p[1][i]==p[0][i])&&('A'<=p[0][i])&&(p[0][i]<='G'))
        {
            switch(p[1][i])
            {
                case 'A': cout<<"MON ";break;
                case 'B': cout<<"TUE ";break;
                case 'C': cout<<"WED ";break;
                case 'D': cout<<"THU ";break;
                case 'E': cout<<"FRI ";break;
                case 'F': cout<<"SAT ";break;
                case 'G': cout<<"SUN ";break;
            }
            break;
        }
    }
    for(j=i+1;j<LEN;j++)
    {
        if(p[1][j]==p[0][j])
        {
            if(('A'<=p[0][j])&&(p[0][j]<='N'))
            {
                printf("%.2d:",p[0][j]-55);
                break;
            }
            else if(('0'<=p[0][j])&&(p[0][j]<='9'))
            {
                printf("%.2d:",p[0][j]-'0');
                break;
            }
        }
    }
    for(i=0;i<LEN;i++)
    {
        if((p[2][i]==p[3][i])&&((('A'<=p[2][i])&&(p[2][i]<='Z'))||(('a'<=p[2][i])&&(p[2][i]<='z'))))
        {
            printf("%.2d",i);
            break;
        }
    }
    return 0;
}
