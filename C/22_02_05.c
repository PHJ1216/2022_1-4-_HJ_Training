#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#define SIZE 5
// 2�� ������ �� ���ϱ� ������ �Լ�

int fc_2cha(int a, int b, int c, double* rms_m, double* rms_p); // �Լ� ����


int main(void)
{
	int x, y, z;
	double rmsm;
	double rmsp;
	printf("2���� ��� a / 1���� ��� b / ����� c �Է� : ");
	scanf("%d %d %d", &x, &y, &z);
	printf("\n");
	fc_2cha(x, y, z, &rmsm, &rmsp);
	printf("%lf\n", rmsm);
	printf("%lf\n", rmsp);
	return 0;
}

int fc_2cha(int a, int b, int c, double* rms_m, double* rms_p) // �Լ� ����
{

	*rms_m = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
	*rms_p = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
}