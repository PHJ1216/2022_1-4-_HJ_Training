#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

// 학점을 파일에 최신화 시키는 프로그램 

int main(void) {

	FILE* fp;
	fp = fopen("texttest.txt", "a");
	int num;
	double grade;
	char name[20];
	char ch;
	
	do
	{
		printf("학번 : ");
		scanf("%d",&num);
		printf("이름 : ");
		scanf("%s",name);
		printf("학점 : ");
		scanf("%lf",&grade);
		fprintf(fp, "\n");
		fprintf(fp, "학번 : %d\n",num );
		fprintf(fp, "이름 : %s\n", name);
		fprintf(fp, "학점 : %lf\n", grade);
		printf("데이터 추가를 계속?(Y/N) : ");
		ch = getche();
		fprintf(fp, "=================================\n");
	} while (ch!='n');
	fclose(fp);
	return 0;
}