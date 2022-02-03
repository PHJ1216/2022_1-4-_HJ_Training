#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
//2�� �Լ� �� ���

//�Լ� ����
double cmt_2cha_1(double a, double b, double c);
double cmt_2cha_2(double a, double b, double c);

int main(void)
{
	double x, y, z;
	printf("������ ��� a �Է� : ");
	scanf("%lf", &x);
	printf("������ ��� b �Է� : ");
	scanf("%lf", &y);
	printf("����� ��� c �Է� : ");
	scanf("%lf", &z);
	printf("%lf  ", cmt_2cha_1(x, y, z));
	printf("%lf", cmt_2cha_2(x, y, z));
	return 0;
}
double cmt_2cha_1(double a, double b, double c) // �Լ� ���� rms_p�� ���� �Լ�
{
	double why = b * b - 4 * a * c;
	double sqrt(double why);
	double rms_p = (-b + sqrt(why))/(2*a);  //rms =�� _ �÷���

	if (rms_p < 0 ) {
		printf("���� �����ϴ�.");
	}
	else {
		return rms_p;
	}
}

double cmt_2cha_2(double a, double b, double c) // �Լ� ���� rms_m�� ���� �Լ�
{
	double why = b * b - 4 * a * c;
	double sqrt(double why);
	double rms_m = (-b - sqrt(why)) / (2 * a);  //rms =�� _ ���̳ʽ�

	if ( rms_m < 0) {
		printf("���� �����ϴ�.");
	}
	else {
		return rms_m;
	}
}