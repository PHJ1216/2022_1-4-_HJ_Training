#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define size 12
int main(void) {
	//���� �迭 ����

	//�迭 ����
	int arr[size] = {31,29,31,30,31,30,31,31,30,31,30,31};

	//�ݺ��� ���
	for (int i = 0; i < size; i++) {
		printf("%d���� %d�ϱ��� �ֽ��ϴ�.\n",i+1,arr[i]);
	}

	return 0;
}