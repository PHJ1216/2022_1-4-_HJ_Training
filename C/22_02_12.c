#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

// &&�� and�� �ٲٱ� ��ũ�� Ȱ��

#define and &&
#define or ||
int main(void) {

    int grade;
    double avg;

    printf("���ݱ��� ȹ���� ������ �Է� : ");
    scanf("%d", &grade);
    printf("���ݱ��� ȹ���� ��������� �Է� : ");
    scanf("%lf", &avg);

    if (grade >= 120 and avg >= 2.0) {
        printf("���� ����!");
    }
    else {
        printf("���� �Ұ���");

    }
    return 0;
}