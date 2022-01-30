#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define size 3
#define size2 3
int main(void) {
	// 행렬 A B를 각각 선언 & 새로운 행렬 C추가
	int A[size][size2] = { {1,0,0},{0,1,0},{0,0,1} };
	int B[size][size2] = { {1,0,0},{0,1,0},{0,0,1} };
	int C[size][size2] = { 0, };
	// 반복문 원소 덧셈
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size2;j++) {
			C[i][j] = A[i][j] + B[i][j];

		}
	}
	// C 행렬 출력
	for (int x = 0;x<size;x++) {
		for (int y = 0;y<size2;y++) {
			printf("%d ",C[x][y]);
		}
		printf("\n");
	}

	return 0;
}