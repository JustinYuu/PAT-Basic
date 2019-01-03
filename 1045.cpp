#include<cstdio>
#include<cstring>
#include<algorithm>

using namespace std;

int n;
long long a[100010], ans[100010], num = 0;
long long leftMax[100010], rightMin[100010];
long long INF = 1<<31-1;

int main(){

    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        scanf("%lld",&a[i]);
    }

    leftMax[0] = 0;
    for(int i = 1; i < n; i++){
        if(a[i-1] > leftMax[i-1]){
            leftMax[i] = a[i-1];
        }else{
            leftMax[i] = leftMax[i-1];
        }
    }
    rightMin[n-1] = INF;
    for(int i = n-2; i >= 0; i--){
        if(a[i+1] < rightMin[i+1]){
            rightMin[i] = a[i+1];
        }else{
            rightMin[i] = rightMin[i+1];
        }
    }
    for(int i = 0; i < n; i++){
        if(a[i] > leftMax[i] && a[i] < rightMin[i]){
            ans[num++] = a[i];
        }
    }

    printf("%lld\n",num);
    sort(ans,ans+num);
    for(int k = 0; k < num; k++){
        if(k == 0){
            printf("%lld",ans[k]);
        }else{
            printf("% lld",ans[k]);
        }
    }
    printf("\n");

    return 0;
}
