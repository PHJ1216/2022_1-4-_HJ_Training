#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int sum = 0;
// for 반복문 함수로 작성

// 함수 원형 선언
int for_(int x, int y);

int main(void){

	int i, j;
	printf("for문 시작 값 입력 : ");  
	scanf("%d", &i);
	printf("\n");
	printf("for문 끝 값 입력 : "); //*n까지 계산할 시 n+1 입력*
	scanf("%d", &j);
	printf("\n");
	printf("%d~%d 덧셈 값 : %d",i,(j-1), for_(i,j));
	return 0;
}
// for문 함수 정의
int for_(int x, int y) {
	

	if (x == y) {
		return sum;
	}
	else {
		sum = sum + x;
		x++;
		return for_(x, y);
	}

	return;
}