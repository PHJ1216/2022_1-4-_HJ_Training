#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define size 10
#define size2 10
int main(void) {
	 
	// 2차원 배열 검색 및 출력

	// 배열 선언
	int rre[size][size2] = { 0, };
	int i=0, j=0;

	// 구구단을 배열에 저장
	for (int x = 1;x<size; x++) {
		for (int y = 1;y<size2; y++) {
			rre[x][y] = x * y;
		}
	}
	// 입력 및 출력
	printf("알고 싶은 구구단 입력 : (예: 9 9)");
	scanf("%d %d", &i ,&j);
	printf("%d X %d = %d", i, j,rre[i][j]);


	return 0;
}