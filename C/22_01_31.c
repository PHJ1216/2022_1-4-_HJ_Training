#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define size 10
#define size2 10
int main(void) {
	 
	// �迭 �����Լ� ����

	// �迭 �� ���� ����
	int arr[100] = { 0, };
	int str[10] = { 0, };
	int tmp = 0;

	// ���� ����� str�� ����
	for (int x = 0; x <= 99; x++) {
		int i = rand() % 10;
		arr[x] = i;
		for (int y = 0; y < 10; y++) {
			if (arr[x] == y) {
				str[y]++;
				
			}
		}
	}
	// ���� ���� 
	for (int a = 0; a <10; a++) {
		for (int b = 0; b < 9; b++) {
			if(str[b]>str[b+1])
			tmp = str[b];
			str[b] = str[b + 1];
			str[b + 1] = tmp;
		}
	}
	for (int h = 0; h < 10; h++) {
		printf("str[%d] ī���� �� = %d\n",h, str[h]);
	}

	return 0;
}