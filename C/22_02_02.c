#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//함수 원형 선언
double f_to_c(double temp_f);

int main(void){
	int f;
	int c;
	printf("화씨온도를 입력하세요 : ");
	scanf("%d", &f);

	c = f_to_c(f);
	printf("섭씨온도 : %d", c);

	return 0;
}
//함수 선언
double f_to_c(double temp_f) {
	double change;
	change = (5.0 * (temp_f- 32.0)) / 9.0;

	return change;
}