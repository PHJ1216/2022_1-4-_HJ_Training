#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

// ������ ���Ͽ� �ֽ�ȭ ��Ű�� ���α׷� 

int main(void) {

	FILE* fp;
	fp = fopen("texttest.txt", "a");
	int num;
	double grade;
	char name[20];
	char ch;
	
	do
	{
		printf("�й� : ");
		scanf("%d",&num);
		printf("�̸� : ");
		scanf("%s",name);
		printf("���� : ");
		scanf("%lf",&grade);
		fprintf(fp, "\n");
		fprintf(fp, "�й� : %d\n",num );
		fprintf(fp, "�̸� : %s\n", name);
		fprintf(fp, "���� : %lf\n", grade);
		printf("������ �߰��� ���?(Y/N) : ");
		ch = getche();
		fprintf(fp, "=================================\n");
	} while (ch!='n');
	fclose(fp);
	return 0;
}