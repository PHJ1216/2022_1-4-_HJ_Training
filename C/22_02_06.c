#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#define num "apple"
// �ܾ� �ֳ��׷� ���� ���α׷� 

int main(void) {

	char aenagram[100] = num;
	char answer[100] = num;
	char guess[100] ;
	int len = strlen(num);
	char tmp;
	for (int i = 0; i < len; i++) {
		int p1, p2;
		p1 = rand() % len;
		p2 = rand() % len;

		tmp = aenagram[p1];
		aenagram[p1] = aenagram[p2];
		aenagram[p2] = tmp;
	}
	while (1) {
		printf("%s ���� �ܾ����� ���߼���.\n",aenagram);
		printf("���� �ܾ� : ");
		scanf("%s", guess);
	
		if (strcmp(guess,answer) == 0) {
			printf("����!");
			break;
		}
	}

	return 0;
}