#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define size 5
int main(void) {
	 //�迭 Min, Max ����

	//�迭 �� ���� ����
	int arr[size] = { 0, };
	int tmp = 0;

	//�Է¹ޱ�
	for (int i = 0; i < 5; i++) {
		printf("������ �Է��ϼ��� : ");
		scanf("%d", &arr[i]);
		printf("\n");
	}
	//����ϱ�
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