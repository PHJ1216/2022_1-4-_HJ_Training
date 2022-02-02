#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//함수 이용 더하기
int add(int x, int y) {
	int result;

	result = x + y;
	return result;
}

int main(void){

	int a, b;
	int r;
	printf("두 정수 입력 : ");
	scanf("%d  %d", &a, & b);
	r=add(a, b); //덧셈 함수 받기
	printf("%d", r);


	return 0;
}