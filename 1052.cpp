#include <stdio.h>
#include <string.h>

char *pump(char a[]) { // ������ȡ������ʶ��ʼ��'[' ����¼���飬��']'�������������з���ʾ¼�����������NULL
	char c = 0;
	memset(a, 0, 5);

	while ((c = getchar()) != '[')
		if (c == '\n') return NULL;
	for (int i = 0; (c = getchar()) != ']'; i++)
		a[i] = c;
	return a;
}

int store(char db[][5], char a[]) { // �洢��ȡ���ı��飬�����ض����ı��������Ϊ������0��ʼ�ǣ�����i-1
	int i = 0;
	for (; pump(a) != NULL; i++)
		strcpy(db[i], a);
	return i - 1;
}

void print(char db[][11][5], int size[]) { // ��ȡ�����������
	int a[5], tag = 1;

	for (int i = 0; i < 5; i++) { // ��ȡһ�������������
		scanf("%d", a+i);
		a[i] -= 1; // ͬ���ģ�ת��Ϊ0��ʼ�����
		if (a[i] > size[i] || a[i] < 0) tag = 0; // ���������ڵ���ţ����tagΪ0
	}

	if (tag) // �������������Ƿ�ȫ���ڣ�ѡ�����ģʽ
		printf("%s(%s%s%s)%s\n", db[0][a[0]], db[1][a[1]], db[2][a[2]], db[1][a[3]], db[0][a[4]]);
	// dbΪ����洢���飬�������ѡ���Ӧ����
	else
		printf("Are you kidding me? @\\/@\n");
}

int main() {
	char a[5], db[3][11][5] = {0};
	int n, size[5] = {0};

	for (int i = 0; i < 3; i++)
		size[i] = store(db[i], a); // ����store�������ص�ֵ����¼�������ĸ������Ӷ��ж������Ƿ����
	size[4] = size[0], size[3] = size[1]; // ��Ϊ��ֻ�۾�����ֻ�֣�����3��4�Ŀ�ѡ��Χ����߶Գ�

	scanf("%d", &n);
	for (int i = 0; i < n; i++) // ���n������ı���
		print(db, size);
	return 0;
}
