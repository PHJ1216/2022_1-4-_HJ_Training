#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#define SIZE 3

// ����ü Ȱ�� �ð� ��� ���α׷�

typedef struct stt {
    int a, b, c;
}point;

int main(void) {
    point start;
    point end;
    point result;

    printf("���۽ð�(��, ��, ��)");
    scanf("%d %d %d", &start.a, &start.b, &start.c);
    printf("\n");
    printf("����ð�(��, ��, ��)");
    scanf("%d %d %d", &end.a, &end.b, &end.c);
    printf("\n");
    result.a =   end.a-start.a;
    result.b =   end.b- start.b;
    result.c =   end.c- start.c;

    printf("�ҿ�ð� : %d : %d : %d", result.a, result.b, result.c);
    
    return 0;
}