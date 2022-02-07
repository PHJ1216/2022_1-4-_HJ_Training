#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

// 암호 생성 프로그램

int main(void) {

	char str[7];
	while (1) {
		printf("암호 생성 : (6자리로 생성)");
		scanf("%s", str);
	int s=0, b=0, n=0;

		for (int i = 0; i<6; i++) {
			if ('a' <= str[i] && str[i] <= 'z') {// 소문자가 있으면 s가 1
				s=1;  
			}
			else if ('A' <= str[i] && str[i] <= 'Z') {//대문자가 있으면 b가 1
				b=1;
			}
			else if ('0' <= str[i] && str[i] <= '9') {//숫자가 있으면 n이 1
				n=1;
			}
		}
		if (s + b + n == 3) {//만약 숫자가 포함되지 않으면 합이 2가 되어 루프를 돈다.
			break;
		}
		printf("다시! 소문자, 대문자, 숫자를 조합하세요.\n");
		
	}
	printf("좋은 암호!");
	return 0;
}