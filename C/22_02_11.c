#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

// 동적 배열을 난수로 채우는 프로그램

int main(void) {
	int* dm;
	dm = (int*)malloc(1000 * sizeof(int));
	for (int i = 0; i < 1000; i++) {
		dm[i] = rand(); // 정수형 범위에서 난수 발생
	}

	for (int x = 0;x<=1000;x++) {
		for (int y = 0;y<1000;y++) {
			if (dm[y] > dm[y + 1]) { // 버블 정렬을 이용한 최댓값 구하기
				int tmp = dm[y];
				dm[y] = dm[y + 1];
				dm[y + 1] = tmp;
			}
		}
	}
	printf("MAX : %d", dm[999]);
	free(dm);
	return 0;
}