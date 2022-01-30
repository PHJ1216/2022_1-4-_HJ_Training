#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define size 10
int main(void) {
	//버블 정렬 프로그램

	//배열및 변수 선언
	int array[size] = { 80,60,30,70,90,20,10,40,50,100 };
	int i,j,k,tmp=0;

	//정렬 반복문
	for (k = 0;k<size;k++) {
		for (i = 0; i < size - 1;i++) {
			if (array[i] > array[i + 1]) {
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp; 
			}
		}
	}
	//정렬된 배열 출력
	printf("[ ");
	for (j = 0; j < size; j++) {
		printf("%d  ", array[j]);
	}
	printf("]");
}