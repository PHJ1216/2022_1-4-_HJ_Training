#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#define num "apple"
// 단어 애나그램 게임 프로그램 

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
		printf("%s 무슨 단어인지 맞추세요.\n",aenagram);
		printf("예측 단어 : ");
		scanf("%s", guess);
	
		if (strcmp(guess,answer) == 0) {
			printf("정답!");
			break;
		}
	}

	return 0;
}