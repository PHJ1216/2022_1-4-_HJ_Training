#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#define SIZE 5
// 문자열 기초

int main(void)
{
	char str[6] = "hello"; // hello문자 뒤 마지막엔 NULL문자인 \0이 저장됨 so 5글자지만 크기가 6인 것
	char str1[] = "komputer";

	printf("Chapter 1\n");
	printf("%s\n", str1);
	str1[0] = 'c';			// 대입 가능 k->c
	printf("%s\n\n", str1); 

	printf("Chapter 2\n");
	char str2[] = "My name is HyeonJun Park";
	printf("%d\n\n", strlen(str2)); //strlen() => 문자열의 길이를 정수로 변환해주는 함수
	
	printf("Chapter 3\n\n");
	/*
	getchar() => 하나의 문자를 받고 반환. 버퍼 사용
	putchar() => 하나의 문자를 받고 출력
	getch() => 하나의 문자를 받아서 반환. 버퍼 사용X  권장*****
	putch() => 하나의 문자를 받아서 출력
	*/
	int ch;
	printf("문자 하나 입력 : ");
	ch = getch(); //a입력
	putch(ch);	  //a출력
	printf("\n\n\n");

	printf("Chapter 4\n");
	/*
	scanf("%s",s) => 배열s에 저장
	printf("%s",s) => 배열s 출력
	gets_s(char s[], int length) =>한 줄의 문자열을 읽고 배열s에 저장 (길이에는 입력 가능 최대 문자 개수)
	puts(char s[]) => 배열 s에 저장된 한 줄의 문자열 출력
	*/
	char name[100];
	char home[100];

	printf("이름 : ");
	scanf("%s", name);
	printf("\n");
	printf("주소 : ");
	scanf("%s", home);
	printf("\n");
	printf("이름은 %s 주소는 %s \n", name, home);
	printf("\n");
	/*
	printf("@@@@@");
	get_s(name,99); 
	이런 식으로 받을 수도 있음.
	*/
	printf("Chapter 5\n");
	/*
	문자열을 수치로 변환 => #include<stdlib.h> 헤더 파일 써야함
	atoi() 정수로
	atof() 실수로
	*/
	int ai;
	double af;
	ai = atoi("1216");
	af = atof("12.16");
	printf("실수 : %d / 정수 : %lf \n\n", ai, af);

	printf("Chapter 6\n");
	/*
	strlen(s) => 문자열 s 길이 구함
	strcpy(s1, s2) => s2를 s1에 복사 == s1이 s2가 됨
	strcat(s1, s2) => s2를 s1에 이어서 붙임 == s1 s2 자리에는 문자배열이 들어가도 되고 그냥 문자도 됨
	strcmp(s1, s2) => s1과 s2 비교 == s1이 s2앞에 있음 음수 반환/s1 s2같으면 0/s1이 s2뒤에 있음 양수 반환
	*/
	char s1[80];
	char s2[80];
	int r;
	printf("first 단어 : ");
	scanf("%s", s1);
	printf("second 단어 : ");
	scanf("%s", s2);
	r = strcmp(s1, s2);
	if (r < 0) {
		printf("s1이 s2보다 앞에 있음");
	}
	else if (r == 0) {
		printf("s1 s2같음");
	}
	else if (r > 0) {
		printf("s1이 s2보다 뒤에 있음");
	}
	
	return 0;
}