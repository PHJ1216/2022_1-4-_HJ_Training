#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
//2차 함수 근 계산

//함수 선언
double cmt_2cha_1(double a, double b, double c);
double cmt_2cha_2(double a, double b, double c);

int main(void)
{
	double x, y, z;
	printf("이차항 계수 a 입력 : ");
	scanf("%lf", &x);
	printf("일차항 계수 b 입력 : ");
	scanf("%lf", &y);
	printf("상수항 계수 c 입력 : ");
	scanf("%lf", &z);
	printf("%lf  ", cmt_2cha_1(x, y, z));
	printf("%lf", cmt_2cha_2(x, y, z));
	return 0;
}
double cmt_2cha_1(double a, double b, double c) // 함수 정의 rms_p에 대한 함수
{
	double why = b * b - 4 * a * c;
	double sqrt(double why);
	double rms_p = (-b + sqrt(why))/(2*a);  //rms =근 _ 플러스

	if (rms_p < 0 ) {
		printf("근이 없습니다.");
	}
	else {
		return rms_p;
	}
}

double cmt_2cha_2(double a, double b, double c) // 함수 정의 rms_m에 대한 함수
{
	double why = b * b - 4 * a * c;
	double sqrt(double why);
	double rms_m = (-b - sqrt(why)) / (2 * a);  //rms =근 _ 마이너스

	if ( rms_m < 0) {
		printf("근이 없습니다.");
	}
	else {
		return rms_m;
	}
}