#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

// ���� ����� ���� ���� ���ڿ� ������ϰ� �ؽ�Ʈ ���� 

int main(void) {

    FILE* fp; //FILE �� ����Ű�� ������ fp ����
    int c;
    char str[100];
    fp = fopen("texttest.txt", "a"); //������ �� �� ��� ���� r:�б� w:���� a:�߰�
    if (fp == NULL) {
        printf("����!");
        exit(1);
    }
    do
    {
        gets(str);
        fputs(str, fp);
    } while (strlen(str)!=0);
    fclose(fp);
    return 0;
}