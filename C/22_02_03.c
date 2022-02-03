#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h> // 제곱근 함수 파일
// 두 점 사이의 거리 계산 함수

double dist_2d(double a1, double a2, double b1, double b2 ); //함수 선언

int main(void)
{
    double x1, x2, y1, y2;
    printf("좌표 (x1, y1) 입력 : ");
    scanf("%lf %lf", &x1, &y1);
    printf("\n");
    printf("좌표 (x1, y1) 입력 : ");
    scanf("%lf %lf", &x2, &y2);
    printf("\n");
    printf("%lf", dist_2d(x1,x2,y1,y2));
    return 0;
}

double dist_2d(double a1, double a2, double b1, double b2) //함수 정의   (a1, b1) //  (a2, b2)
{
    double y = 0;
    double disXY;
    disXY = ((a2 - a1) * (a2 - a1))+ ((b2 - b1) * (b2 - b1));
    double sqrt(disXY); //제곱근 함수 disXY에 루트값 
    return sqrt(disXY); // 반환값 diXY 루트값

}