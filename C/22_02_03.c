#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
// �Ǽ� ��� �� �Լ�

double get_bs();

int main(void) {

	double i, j;
	printf("�Ǽ��� �Է��ϼ��� : ");
	scanf("%lf", &i);
	printf("�Ǽ��� �Է��ϼ��� : ");
	scanf("%lf", &j);
	printf("�� ū ���� %lf�Դϴ�,",get_bs(i, j));

	return 0;
}

double get_bs(double x, double y) {
	double result;
	if (x > y) {
		result = x;
			return result;
	}
	else {
		result = y;
		return result;
	}
}