#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

// ���ڿ��� ������ ���� ����

int main(void) {
	
	char s[] = "hello world"; // �繮���� �迭�� ����
	char* p = "hello world";  // �蹮���� ������ ����
	/*
	���� ������ Ư¡
	1. ȿ������ �޸� ����
	2. ����� ����
	3. �󸶵��� ���� ����
	4. �б� ���� �޸𸮿� ����
	*/
	printf("���� �� : %s\n", p);
	p = "hello gwangJu";
	printf("���� �� : %s\n\n", p);

	//���ڿ��� �迭

	/*
	1���� �迭���� 2���� �迭 Ȱ�뼺�� �� ����
	*/
	char ss[3][20] = { "apple","banana","orrange" };//3�� 1�ٴ� 20����Ʈ ���ڿ� �Է� ����
	for (int i = 0; i < 3; i++) {
		printf("%s\n", ss[i]); //ss[i][k]  i�κ��� ��ȣ�� k�κ��� ��¿� �ʿ����. k�� ���� �޸�ũ�⸦ �����ִ� ��
	}
	return 0;
}