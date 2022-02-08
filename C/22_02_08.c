#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

// 과도한 공백 삭제 프로그램
int main(void) {
    char str[100];
    printf("텍스트를 입력하시오: ");
    gets_s(str, 100);

    for (int i = 0; i < 100; i++) {
        if (str[i] == ' ' && str[i + 1] == ' ') {
            continue;
        }
        printf("%c", str[i]);
    }
    return 0;
}
