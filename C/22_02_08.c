#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

//���ڿ� ���� �˻� ���α׷�

int main(void) {

	char str[5] = "1234";
	char ch[5]=" ";
	
	while (1) {
		printf("��й�ȣ�� �Է��ϼ��� : ");
		for (int i = 0; i < 4; i++) {
			ch[i] = getch();
			putch('*');
		}
			printf("\n");
		if (strcmp(ch,str)==0) {
			
			break;
		}
		
	}
	printf("�н����� ��ġ!");

	return 0;
}