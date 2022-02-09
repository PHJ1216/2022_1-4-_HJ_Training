#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

//구조체 두 점 사이 거리 구하기 


struct point
{
    int x;
    int y;

};

int main(void) {
    
    struct point pt={10,10};
    struct point pt1={20,20};
    printf("1point 좌표 : (%d,%d)\n",pt.x,pt.y);
    printf("2point 좌표 : (%d,%d)\n", pt1.x, pt1.y);
    double v= sqrt((pt1.x-pt.x)*(pt1.x - pt.x)+(pt1.y - pt.y)*(pt1.y - pt.y));
    printf("두 사이의 거리 : %lf", v);
    return 0;
}