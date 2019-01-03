#include<stdio.h>
#include<string.h>
int a[100];
int main(){
	int i,j,k,n;
	char h[13][5]={"tret","jan","feb","mar","apr","may","jun","jly","aug","sep","oct","nov","dec"};
	char H[13][5]={"tret","tam","hel","maa","huh","tou","kes","hei","elo","syy","lok","mer","jou"};
	scanf("%d",&n);
	getchar();
	for(i=0;i<n;i++){

		char str[10];
		gets(str);
		if(str[0]>='0'&&str[0]<='9'){
			int m=0;
			for(j=0;str[j]!='\0';j++)
				m=m*10+str[j]-'0';
			if(m>=13){
				if(m%13){
					printf("%s ",H[m/13]);
					printf("%s\n",h[m%13]);
				}
				else
					printf("%s\n",H[m/13]);
			}
			else
				printf("%s\n",h[m]);
		}
		else{
			int m=0;
			for(j=0;j<13;j++){
				if(strstr(str,H[j]))
					m=j*13;
			}
			for(j=0;j<13;j++){
				if(strstr(str,h[j]))
					m+=j;
			}
			printf("%d\n",m);
		}
	}
return 0;
}
