#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

// 파일 입출력 한 글자씩 쓰기 기초 문법

int main(void) {

    FILE* fp; //FILE 을 가리키는 포인터 fp 선언
    fp = fopen("texttest.txt", "w"); //파일을 연 후 모드 설정 r:읽기 w:쓰기 a:추가
    if (fp == NULL) {
        printf("실패!");
        exit(1);
    }
    for (char c = 'a'; c <= 'z'; c++) {
        fputc(c, fp);  //fputc(a,b) 함수 문자a를 b에 쓴다. 

    }

    fclose(fp);
    return 0;
}