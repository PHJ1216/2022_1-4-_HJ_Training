#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#define SIZE 5
// 실수를 정수부 소수부로 나누기 포인터 함수

void get(double value, int* i_part, double* f_part); //함수 선언
int main(void)
{
	double abc = 3.14;
	int ipt;
	double  fpt;
	get(abc, &ipt, &fpt);
	printf("정수부 %d \n", ipt);
	printf("실수부 %lf",fpt );

	return 0;
}

void get(double value, int* i_part, double* f_part) //함수 정의 
{
	*i_part = value / 1;
	*f_part = value - 3;
}