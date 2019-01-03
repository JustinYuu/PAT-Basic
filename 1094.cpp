#include<stdio.h>
#include<stdlib.h>

int getstr(char a[], int i, int K);    //��ȡ�˸��ַ��ĺ���
int isprime(int m);                    //�ж��Ƿ�Ϊ�����ĺ���

int main()
{
    int L, K, f = 0;
    scanf("%d %d", &L, &K);
    char a[L];
    scanf("%s", a);
    for(int i = 0; i < L - K + 1; i++){
        int str = getstr(a, i, K);  //ȡ��λ��
        f = isprime(str);           // �ж��Ƿ�Ϊ����
        if(f == 1){
            printf("%0*d", K, str);    //�̶������λ�������str������λ���򲹣�
            break;
        }
    }
    if(f == 0)  printf("404");
    return 0;
}

int getstr(char a[], int i, int K){
    int m;
    char b[K];
    for(int j = 0; j < K; j++)    b[j] = a[i+j];
    m = atoi(b);    //���ַ���ת����int��
    return m;
}

int isprime(int m){
    int flag = 1;
    for(int i = 2; i <= sqrt(m); i++){
        if(m % i == 0){
            flag = 0;
            break;
        }
    }
    if(m < 2)  flag = 0;    //�ж�m�Ƿ�С�ڣ���������������Ҳ��AC
    return flag;
}
