#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
// �Լ��� �̿��� MAXã��

//�Է� �Լ�
int get_int() {
	int val;
	printf("���� �Է� : ");
	scanf("%d", &val);
	return val;
}
//if�� MAXã��
int find_max(int x,int y) {
	int MAX;
	if (x > y) {
		MAX=x;
	}
	else if (x < y) {
		 MAX=y;
	}
	return MAX;
}
int main(void){
	int a, b;
	a = get_int();
	b = get_int();

	int r;
	r = find_max(a,b);
	printf("MAX���� %d", r);


	return 0;
}