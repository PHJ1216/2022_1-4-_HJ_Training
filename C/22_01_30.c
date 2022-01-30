#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define size 10
int main(void) {
	//배열 선언
	int j = 0;
	int array[size] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
	printf("[ 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 ]\n");
	scanf("%d", &j);
		// if 인덱스 값=50 프린트
	for (int i = 0; i < size; i++) {
		
		if (array[i] == j) {
			printf("탐색을 성공하였습니다. 탐색 인덱스 값 = %d", i);
			break;
		}
	}
}