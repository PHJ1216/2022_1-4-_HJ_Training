#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#define SIZE 3
//


struct school
{
    int num;
    double grade;
    char name[20];

};

int main(void) {
    
    struct school list[SIZE];

    for (int i = 0; i < SIZE; i++) {
        printf("�̸� : ");
        scanf("%s", list[i].name);
        printf("�г� : ");
        scanf("%d", &list[i].num);
        printf("���� : ");
        scanf("%lf", &list[i].grade);
        printf("\n");
    }
    printf("======================================\n");
    for (int j = 0; j < SIZE; j++) {
        printf("%d�г� '%s'�л��� ������ %lf�Դϴ�...  \n",list[j].num,list[j].name, list[j].grade);
    }

    printf("======================================");
    return 0;
}