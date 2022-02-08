#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

// 구조체 기초 문법

struct student  //구조체 선언
{
    int number;
    char name[10];
    double grade;
};
int main(void) {

    struct student s1={24,"park",4.3}; //구조체 변수 정의


    return 0;
}
