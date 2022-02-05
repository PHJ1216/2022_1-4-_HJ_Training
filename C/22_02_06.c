#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

// 문자열과 포인터 기초 문법

int main(void) {
	
	char s[] = "hello world"; // ①문자형 배열을 선언
	char* p = "hello world";  // ②문자형 포인터 선언
	/*
	②의 장점및 특징
	1. 효율적인 메모리 관리
	2. 사용이 편리함
	3. 얼마든지 변경 가능
	4. 읽기 전용 메모리에 저장
	*/
	printf("변경 전 : %s\n", p);
	p = "hello gwangJu";
	printf("변경 후 : %s\n\n", p);

	//문자열과 배열

	/*
	1차원 배열보다 2차원 배열 활용성이 더 좋음
	*/
	char ss[3][20] = { "apple","banana","orrange" };//3줄 1줄당 20바이트 문자열 입력 가능
	for (int i = 0; i < 3; i++) {
		printf("%s\n", ss[i]); //ss[i][k]  i부분의 괄호만 k부분은 출력에 필요없음. k는 단지 메모리크기를 정해주는 것
	}
	return 0;
}