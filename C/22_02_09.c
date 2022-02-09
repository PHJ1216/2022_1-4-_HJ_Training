#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

//구조체 예제 및 기초 문법

struct sch
{
    int grade;
    char name[20];
    double credit;
};
struct exers
{
    int x;
    int y;

};

int main(void) {

    printf("예제 1\n");
    struct sch s;

    s.grade = 2;
    strcpy(s.name ,"hyeonjun"); //기본적으로 문법이 name="문자열";은 허용되지 않음. 고로 strcpy() 함수 사용해야함
    s.credit = 3.3;

    printf("%d %s %lf\n\n", s.grade, s.name, s.credit);

    struct exers p = { 1,2 };
    struct exers q = { .x = 1,.y = 2 };
    struct exers r = p;
    r = (struct exers){ 1,2 }; //중요한 기법 구조체 변수 선언이 종료되어도 {1,2}로 초기화 가능

    printf("예제 2\n");
    printf("p:%d , %d\n",p.x,p.y);
    printf("p:%d , %d\n",q.x,q.y);
    printf("p:%d , %d\n",r.x,r.y);
    return 0;
}