#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

//����ü �� �� ���� �Ÿ� ���ϱ� 


struct point
{
    int x;
    int y;

};

int main(void) {
    
    struct point pt={10,10};
    struct point pt1={20,20};
    printf("1point ��ǥ : (%d,%d)\n",pt.x,pt.y);
    printf("2point ��ǥ : (%d,%d)\n", pt1.x, pt1.y);
    double v= sqrt((pt1.x-pt.x)*(pt1.x - pt.x)+(pt1.y - pt.y)*(pt1.y - pt.y));
    printf("�� ������ �Ÿ� : %lf", v);
    return 0;
}