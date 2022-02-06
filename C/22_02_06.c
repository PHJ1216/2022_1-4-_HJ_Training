#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#define num "apple"
// 간이 한영사전 구현 프로그램

int main(void) {

	char dic[5][2][30] = {// dic[i][j][k] i는 행 j는 행에서 문자열 2개 k는 해당 행에 대한 메모리크기 
		{"computer","컴퓨터"},
		{"c programming","c언어"},
		{"java","자바"},
		{"phython","파이썬"},
		{"hyeonjun","현준"}
	};
	char ans[1][30];
	while (1) {
		printf("한글을 입력하세요");
		scanf("%s", ans);
		for (int i = 0; i < 5; i++) {
			if (strcmp(dic[i][1],ans)==0) {
				printf("%s를 영어로 하면 %s입니다.\n",ans[0], dic[i][0]);
				return 0;
			}
			
		}
	}
	return 0;
}