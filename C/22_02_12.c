#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

// &&를 and로 바꾸기 매크로 활용

#define and &&
#define or ||
int main(void) {

    int grade;
    double avg;

    printf("지금까지 획득한 학점을 입력 : ");
    scanf("%d", &grade);
    printf("지금까지 획득한 학점평균을 입력 : ");
    scanf("%lf", &avg);

    if (grade >= 120 and avg >= 2.0) {
        printf("졸업 가능!");
    }
    else {
        printf("졸업 불가능");

    }
    return 0;
}