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
	if (x > y) {
		return x;
	}
	else  {
		return y;
	}
	
}
int main(void){
	int a, b;
	a = get_int();
	b = get_int();

	printf("MAX���� %d", find_max(a, b));
 
	return 0;
}