#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

//문자열 동일 검사 프로그램

int main(void) {

	char str[5] = "1234";
	char ch[5]=" ";
	
	while (1) {
		printf("비밀번호를 입력하세요 : ");
		for (int i = 0; i < 4; i++) {
			ch[i] = getch();
			putch('*');
		}
			printf("\n");
		if (strcmp(ch,str)==0) {
			
			break;
		}
		
	}
	printf("패스워드 일치!");

	return 0;
}