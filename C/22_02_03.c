#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// 1차식 계산 함수
double fc_p(double x, double y);

int main(void) {
	double i, j;

	printf("두 실수를 입력하세요 : ");
	scanf("%lf %lf", &i, &j);
	printf("x:%lf y:%lf f(x,y)=%lf", i, j, fc_p(i,j));

	return 0;
}

double fc_p(double x, double y) {
	double plus = 0;
	plus = 1.5 * x + 3.0 * y;

	return plus;
}