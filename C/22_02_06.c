#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

// ������ ���ڿ� ���߱�

int main(void) {
	char* fruit;
	fruit = "apple";
	char guess[80];

	do
	{
		printf("���� �������� ���߼��� : ");
		scanf("%s", guess);
		
	} while (strcmp(fruit,guess) != 0);
	printf("����!");
	return 0;
}