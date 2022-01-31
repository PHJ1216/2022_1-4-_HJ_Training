#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define size 12
int main(void) {
	//기초 배열 문제

	//배열 선언
	int arr[size] = {31,29,31,30,31,30,31,31,30,31,30,31};

	//반복문 출력
	for (int i = 0; i < size; i++) {
		printf("%d월의 %d일까지 있습니다.\n",i+1,arr[i]);
	}

	return 0;
}