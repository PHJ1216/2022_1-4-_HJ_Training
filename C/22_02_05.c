#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#define SIZE 5
// ���ڿ� ����

int main(void)
{
	char str[6] = "hello"; // hello���� �� �������� NULL������ \0�� ����� so 5�������� ũ�Ⱑ 6�� ��
	char str1[] = "komputer";

	printf("Chapter 1\n");
	printf("%s\n", str1);
	str1[0] = 'c';			// ���� ���� k->c
	printf("%s\n\n", str1); 

	printf("Chapter 2\n");
	char str2[] = "My name is HyeonJun Park";
	printf("%d\n\n", strlen(str2)); //strlen() => ���ڿ��� ���̸� ������ ��ȯ���ִ� �Լ�
	
	printf("Chapter 3\n\n");
	/*
	getchar() => �ϳ��� ���ڸ� �ް� ��ȯ. ���� ���
	putchar() => �ϳ��� ���ڸ� �ް� ���
	getch() => �ϳ��� ���ڸ� �޾Ƽ� ��ȯ. ���� ���X  ����*****
	putch() => �ϳ��� ���ڸ� �޾Ƽ� ���
	*/
	int ch;
	printf("���� �ϳ� �Է� : ");
	ch = getch(); //a�Է�
	putch(ch);	  //a���
	printf("\n\n\n");

	printf("Chapter 4\n");
	/*
	scanf("%s",s) => �迭s�� ����
	printf("%s",s) => �迭s ���
	gets_s(char s[], int length) =>�� ���� ���ڿ��� �а� �迭s�� ���� (���̿��� �Է� ���� �ִ� ���� ����)
	puts(char s[]) => �迭 s�� ����� �� ���� ���ڿ� ���
	*/
	char name[100];
	char home[100];

	printf("�̸� : ");
	scanf("%s", name);
	printf("\n");
	printf("�ּ� : ");
	scanf("%s", home);
	printf("\n");
	printf("�̸��� %s �ּҴ� %s \n", name, home);
	printf("\n");
	/*
	printf("@@@@@");
	get_s(name,99); 
	�̷� ������ ���� ���� ����.
	*/
	printf("Chapter 5\n");
	/*
	���ڿ��� ��ġ�� ��ȯ => #include<stdlib.h> ��� ���� �����
	atoi() ������
	atof() �Ǽ���
	*/
	int ai;
	double af;
	ai = atoi("1216");
	af = atof("12.16");
	printf("�Ǽ� : %d / ���� : %lf \n\n", ai, af);

	printf("Chapter 6\n");
	/*
	strlen(s) => ���ڿ� s ���� ����
	strcpy(s1, s2) => s2�� s1�� ���� == s1�� s2�� ��
	strcat(s1, s2) => s2�� s1�� �̾ ���� == s1 s2 �ڸ����� ���ڹ迭�� ���� �ǰ� �׳� ���ڵ� ��
	strcmp(s1, s2) => s1�� s2 �� == s1�� s2�տ� ���� ���� ��ȯ/s1 s2������ 0/s1�� s2�ڿ� ���� ��� ��ȯ
	*/
	char s1[80];
	char s2[80];
	int r;
	printf("first �ܾ� : ");
	scanf("%s", s1);
	printf("second �ܾ� : ");
	scanf("%s", s2);
	r = strcmp(s1, s2);
	if (r < 0) {
		printf("s1�� s2���� �տ� ����");
	}
	else if (r == 0) {
		printf("s1 s2����");
	}
	else if (r > 0) {
		printf("s1�� s2���� �ڿ� ����");
	}
	
	return 0;
}