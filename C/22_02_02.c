#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//�Լ� �̿� ���ϱ�
int add(int x, int y) {
	int result;

	result = x + y;
	return result;
}

int main(void){

	int a, b;
	int r;
	printf("�� ���� �Է� : ");
	scanf("%d  %d", &a, & b);
	r=add(a, b); //���� �Լ� �ޱ�
	printf("%d", r);


	return 0;
}