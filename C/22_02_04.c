#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#define SIZE 5
// �迭 �������� ��� ������ �Լ�

int reverse(int* p,int size); // �Լ� ����

int main(void)
{
	int arr[SIZE] = { 0, };
	printf("���� 5���� �Է� \n");
	for (int dd = 0; dd < 5; dd++) {
		printf("%d��° ���� : ", dd + 1);
		scanf("%d", &arr[dd]);
		printf("\n");
	}
	printf("[  ");
	reverse(arr, SIZE);
	printf(" ]");
	return 0;
}

int reverse(int* p,int size) // �Լ� ����
{
	int tmp = 0;
	for (int j = 0; j < size; j++) {
		for (int k = 0; k < size; k++) {
			if (p[k] < p[k + 1]) {
				tmp = p[k + 1];
				p[k + 1] = p[k];
				p[k] = tmp;
			}
		}//2for
	}//1for
	for (int num = 0; num < size; num++)
	{
		printf("%d  ", p[num]);
	}
}
