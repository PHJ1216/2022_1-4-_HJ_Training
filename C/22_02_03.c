#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
// 실수 대수 비교 함수

double get_bs();

int main(void) {

	double i, j;
	printf("실수를 입력하세요 : ");
	scanf("%lf", &i);
	printf("실수를 입력하세요 : ");
	scanf("%lf", &j);
	printf("더 큰 수는 %lf입니다,",get_bs(i, j));

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