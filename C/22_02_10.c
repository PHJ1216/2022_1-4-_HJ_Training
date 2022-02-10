#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

// 파일 입출력 기초 문법 문자열 입출력하고 텍스트 저장 

int main(void) {

    FILE* fp; //FILE 을 가리키는 포인터 fp 선언
    int c;
    char str[100];
    fp = fopen("texttest.txt", "a"); //파일을 연 후 모드 설정 r:읽기 w:쓰기 a:추가
    if (fp == NULL) {
        printf("실패!");
        exit(1);
    }
    do
    {
        gets(str);
        fputs(str, fp);
    } while (strlen(str)!=0);
    fclose(fp);
    return 0;
}