#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

// 지정된 문자열 맞추기

int main(void) {
	char* fruit;
	fruit = "apple";
	char guess[80];

	do
	{
		printf("무슨 과일인지 맞추세요 : ");
		scanf("%s", guess);
		
	} while (strcmp(fruit,guess) != 0);
	printf("정답!");
	return 0;
}