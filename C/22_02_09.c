#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

//����ü ���� �� ���� ����

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

    printf("���� 1\n");
    struct sch s;

    s.grade = 2;
    strcpy(s.name ,"hyeonjun"); //�⺻������ ������ name="���ڿ�";�� ������ ����. ��� strcpy() �Լ� ����ؾ���
    s.credit = 3.3;

    printf("%d %s %lf\n\n", s.grade, s.name, s.credit);

    struct exers p = { 1,2 };
    struct exers q = { .x = 1,.y = 2 };
    struct exers r = p;
    r = (struct exers){ 1,2 }; //�߿��� ��� ����ü ���� ������ ����Ǿ {1,2}�� �ʱ�ȭ ����

    printf("���� 2\n");
    printf("p:%d , %d\n",p.x,p.y);
    printf("p:%d , %d\n",q.x,q.y);
    printf("p:%d , %d\n",r.x,r.y);
    return 0;
}