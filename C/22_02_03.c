#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h> // ������ �Լ� ����
// �� �� ������ �Ÿ� ��� �Լ�

double dist_2d(double a1, double a2, double b1, double b2 ); //�Լ� ����

int main(void)
{
    double x1, x2, y1, y2;
    printf("��ǥ (x1, y1) �Է� : ");
    scanf("%lf %lf", &x1, &y1);
    printf("\n");
    printf("��ǥ (x1, y1) �Է� : ");
    scanf("%lf %lf", &x2, &y2);
    printf("\n");
    printf("%lf", dist_2d(x1,x2,y1,y2));
    return 0;
}

double dist_2d(double a1, double a2, double b1, double b2) //�Լ� ����   (a1, b1) //  (a2, b2)
{
    double y = 0;
    double disXY;
    disXY = ((a2 - a1) * (a2 - a1))+ ((b2 - b1) * (b2 - b1));
    double sqrt(disXY); //������ �Լ� disXY�� ��Ʈ�� 
    return sqrt(disXY); // ��ȯ�� diXY ��Ʈ��

}