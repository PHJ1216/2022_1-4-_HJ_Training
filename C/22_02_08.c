#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

// ������ ���� ���� ���α׷�
int main(void) {
    char str[100];
    printf("�ؽ�Ʈ�� �Է��Ͻÿ�: ");
    gets_s(str, 100);

    for (int i = 0; i < 100; i++) {
        if (str[i] == ' ' && str[i + 1] == ' ') {
            continue;
        }
        printf("%c", str[i]);
    }
    return 0;
}
