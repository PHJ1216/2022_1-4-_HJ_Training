#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

// �ؽ�Ʈ ���� �����ϱ� ���α׷�

int main(void) {

	FILE* onefp;
	FILE* cpyfp;
	char file1[100],file2[100];
	
	printf("���� ���� �̸� : "); // ���� ���� �̸� ���ϱ� 
	scanf("%s", file1);

	printf("���� ���� �̸� : "); // ���� ���� �̸� ���ϱ�
	scanf("%s", file2);

	if ((onefp=fopen(file1,"r"))==NULL) {   //�б� ���� ����.
		fprintf(stderr, "one������ �� �� �����ϴ�.\n");
		exit(1);
	}
	if ((cpyfp = fopen(file2, "w")) == NULL) { //���� ���� ����.
		fprintf(stderr, "cpy������ �� �� �����ϴ�.\n");
		exit(1);
	}
	int c; 
	while ((c = fgetc(onefp)) != EOF) { 
		fputc(c, cpyfp); 
	}
	fclose (onefp);
	fclose (cpyfp);
	
	return 0;
}