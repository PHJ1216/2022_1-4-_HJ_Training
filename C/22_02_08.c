#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

// ����ü �⺻ ����

struct student  //����ü ����
{
    int number;
    char name[10];
    double grade;
};
int main(void) {

    struct student s1={24,"park",4.3}; //����ü ���� ����


    return 0;
}
