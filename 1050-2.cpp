#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <cstring>
using namespace std;
int comp(const void*a,const void*b)
{
    return *(int*)b-*(int*)a;
}
int main()
{
    int N;
    cin>>N;
    int* p = new int[N];
    for(int i=0;i<N;++i)
        cin>>p[i];
    qsort(p,N,sizeof(int),comp);
    //n=floor(sqrt(N));
    //m=ceil(sqrt(N));
    int m=0,n=0,min=N;
    for(int i=0;i<=N;i++){
        for(int j=0;j<=i;j++){
            if(i*j==N&&(i-j)<min){
                min=i-j;
                m=i;
                n=j;
            }
        }
    }
    int matrix[m][n];
    memset(matrix,0,sizeof(matrix));
    int tm=m,tn=n;
    int i=0,j=0,k=1;
    matrix[0][0]=p[0];
    while(k<N)//核心在于遇到已赋值的转方向
    {
        while(j+1<n&&!matrix[i][j+1])   matrix[i][++j]=p[k++];
        while(i+1<m&&!matrix[i+1][j])    matrix[++i][j]=p[k++];
        while(j-1>=0&&!matrix[i][j-1])   matrix[i][--j]=p[k++];
        while(i-1>=0&&!matrix[i-1][j])   matrix[--i][j]=p[k++];
    }
    for(int i=0;i<m;++i)
    {
        for(int j=0;j<n;++j){
            if(j!=0)
                cout<<' ';
            cout<<matrix[i][j];
        }
        cout<<endl;
    }
    return 0;
}
