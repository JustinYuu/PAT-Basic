#include<stdio.h>
#include<string.h>

int main(){

    char str[81][81];
    int index = 0;

    while( scanf("%s",str[index++]) != EOF);

    for(int i = index-2; i >= 0; i--){
        printf("%s",str[i]);
        if(i > 0) printf(" ");
    }

    return 0;
}
