#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#define SIZE 3

// ����ü ������ ���� ����

struct pointer {
    char name[20];
    double grade;
    int number;
};

int main(void) {
    struct pointer abc;
    struct pointer* p;
    p = &abc;
    printf("�г� ���� �̸� ������� �Է� : ");
    scanf("%d %lf %s",&abc.number,&abc.grade,abc.name);
    printf("\n");
    printf("%d %lf %s\n", abc.number, abc.grade,  abc.name);
    printf("%d %lf %s", p->number, p->grade,p->name);  //(*p).number,(*p).grade,(*p).name �� ������ ����

    return 0;
}