#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define size 10
#define size2 10
int main(void) {
	 
	// 2���� �迭 �˻� �� ���

	// �迭 ����
	int rre[size][size2] = { 0, };
	int i=0, j=0;

	// �������� �迭�� ����
	for (int x = 1;x<size; x++) {
		for (int y = 1;y<size2; y++) {
			rre[x][y] = x * y;
		}
	}
	// �Է� �� ���
	printf("�˰� ���� ������ �Է� : (��: 9 9)");
	scanf("%d %d", &i ,&j);
	printf("%d X %d = %d", i, j,rre[i][j]);


	return 0;
}