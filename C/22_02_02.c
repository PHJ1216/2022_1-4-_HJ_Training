#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//�Լ� ���� ����
double f_to_c(double temp_f);

int main(void){
	int f;
	int c;
	printf("ȭ���µ��� �Է��ϼ��� : ");
	scanf("%d", &f);

	c = f_to_c(f);
	printf("�����µ� : %d", c);

	return 0;
}
//�Լ� ����
double f_to_c(double temp_f) {
	double change;
	change = (5.0 * (temp_f- 32.0)) / 9.0;

	return change;
}