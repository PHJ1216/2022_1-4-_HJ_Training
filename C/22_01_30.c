#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define size 10
int main(void) {
	//�迭 ����
	int j = 0;
	int array[size] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
	printf("[ 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 ]\n");
	scanf("%d", &j);
		// if �ε��� ��=50 ����Ʈ
	for (int i = 0; i < size; i++) {
		
		if (array[i] == j) {
			printf("Ž���� �����Ͽ����ϴ�. Ž�� �ε��� �� = %d", i);
			break;
		}
	}
}