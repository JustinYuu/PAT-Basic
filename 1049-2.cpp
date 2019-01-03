#include <cstdio>

int main(){
    int n;
    scanf("%d",&n);

    double num = 0;
    double result = 0;

    for(int i = 1; i <= n; i++) {
        scanf("%lf", &num);
        result += (n + 1 - i) * num * i;
    }

    printf("%.2f", result);
    return 0;
}
