#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define size 10
int main(void) {
	//���� ���� ���α׷�

	//�迭�� ���� ����
	int array[size] = { 80,60,30,70,90,20,10,40,50,100 };
	int i,j,k,tmp=0;

	//���� �ݺ���
	for (k = 0;k<size;k++) {
		for (i = 0; i < size - 1;i++) {
			if (array[i] > array[i + 1]) {
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp; 
			}
		}
	}
	//���ĵ� �迭 ���
	printf("[ ");
	for (j = 0; j < size; j++) {
		printf("%d  ", array[j]);
	}
	printf("]");
}