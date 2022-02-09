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
        printf("이름 : ");
        scanf("%s", list[i].name);
        printf("학년 : ");
        scanf("%d", &list[i].num);
        printf("학점 : ");
        scanf("%lf", &list[i].grade);
        printf("\n");
    }
    printf("======================================\n");
    for (int j = 0; j < SIZE; j++) {
        printf("%d학년 '%s'학생은 학점이 %lf입니당...  \n",list[j].num,list[j].name, list[j].grade);
    }

    printf("======================================");
    return 0;
}