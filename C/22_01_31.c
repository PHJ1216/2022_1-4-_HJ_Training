#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define size 3
#define size2 3
int main(void) {
	 
	// 2�����迭 ���� �� ���

	//�迭 �� ���� ����
	int test[size][size2] = { {30,10,11},{40,90,32},{70,65,56} };
	int avr[3] = {0,};
	int x, y;

	//��� ��� �� ���
	for (x = 0;x<3;x++) {
		for (y = 0; y < 1; y++) {
			avr[x] = (test[x][y] + test[x][y + 1] + test[x][y + 2]) / 3;
		}
	}
	printf("�л�1�� %d��, �л�2�� %d, �л�3�� %d", avr[0],avr[1],avr[2]);

	return 0;
}