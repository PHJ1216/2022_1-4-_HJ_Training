#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

// ���� ����� �� ���ھ� ���� ���� ����

int main(void) {

    FILE* fp; //FILE �� ����Ű�� ������ fp ����
    fp = fopen("texttest.txt", "w"); //������ �� �� ��� ���� r:�б� w:���� a:�߰�
    if (fp == NULL) {
        printf("����!");
        exit(1);
    }
    for (char c = 'a'; c <= 'z'; c++) {
        fputc(c, fp);  //fputc(a,b) �Լ� ����a�� b�� ����. 

    }

    fclose(fp);
    return 0;
}