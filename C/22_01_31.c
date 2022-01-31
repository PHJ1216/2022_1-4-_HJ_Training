#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define size 5
int main(void) {
	 //배열 Min, Max 문제

	//배열 및 변수 선언
	int arr[size] = { 0, };
	int tmp = 0;

	//입력받기
	for (int i = 0; i < 5; i++) {
		printf("정수를 입력하세용 : ");
		scanf("%d", &arr[i]);
		printf("\n");
	}
	//출력하기
	for (int x = 0;x<5;x++) {
		for (int y = 0;y<4;y++) {
			if (arr[y] > arr[y + 1]) {
				tmp = arr[y];
				arr[y] = arr[y+1];
				arr[y + 1] = tmp;
			}

		}
	}
	printf("%d %d", arr[0], arr[4]);
	return 0;
}