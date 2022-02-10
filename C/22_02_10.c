#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

// 텍스트 파일 복사하기 프로그램

int main(void) {

	FILE* onefp;
	FILE* cpyfp;
	char file1[100],file2[100];
	
	printf("원본 파일 이름 : "); // 원본 파일 이름 정하기 
	scanf("%s", file1);

	printf("복사 파일 이름 : "); // 복사 파일 이름 정하기
	scanf("%s", file2);

	if ((onefp=fopen(file1,"r"))==NULL) {   //읽기 모드로 연다.
		fprintf(stderr, "one파일을 열 수 없습니다.\n");
		exit(1);
	}
	if ((cpyfp = fopen(file2, "w")) == NULL) { //쓰기 모드로 연다.
		fprintf(stderr, "cpy파일을 열 수 없습니다.\n");
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