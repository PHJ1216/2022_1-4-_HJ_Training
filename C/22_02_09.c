#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#define SIZE 3

// 구조체 활용 시간 계산 프로그램

typedef struct stt {
    int a, b, c;
}point;

int main(void) {
    point start;
    point end;
    point result;

    printf("시작시간(시, 분, 초)");
    scanf("%d %d %d", &start.a, &start.b, &start.c);
    printf("\n");
    printf("종료시간(시, 분, 초)");
    scanf("%d %d %d", &end.a, &end.b, &end.c);
    printf("\n");
    result.a =   end.a-start.a;
    result.b =   end.b- start.b;
    result.c =   end.c- start.c;

    printf("소요시간 : %d : %d : %d", result.a, result.b, result.c);
    
    return 0;
}