#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#define SIZE 5
// 2차 방정식 근 구하기 포인터 함수

int fc_2cha(int a, int b, int c, double* rms_m, double* rms_p); // 함수 선언


int main(void)
{
	int x, y, z;
	double rmsm;
	double rmsp;
	printf("2차항 계수 a / 1차항 계수 b / 상수항 c 입력 : ");
	scanf("%d %d %d", &x, &y, &z);
	printf("\n");
	fc_2cha(x, y, z, &rmsm, &rmsp);
	printf("%lf\n", rmsm);
	printf("%lf\n", rmsp);
	return 0;
}

int fc_2cha(int a, int b, int c, double* rms_m, double* rms_p) // 함수 정의
{

	*rms_m = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
	*rms_p = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
}