#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#define SIZE 5
// �Ǽ��� ������ �Ҽ��η� ������ ������ �Լ�

void get(double value, int* i_part, double* f_part); //�Լ� ����
int main(void)
{
	double abc = 3.14;
	int ipt;
	double  fpt;
	get(abc, &ipt, &fpt);
	printf("������ %d \n", ipt);
	printf("�Ǽ��� %lf",fpt );

	return 0;
}

void get(double value, int* i_part, double* f_part) //�Լ� ���� 
{
	*i_part = value / 1;
	*f_part = value - 3;
}