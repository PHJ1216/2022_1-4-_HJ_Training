#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#define SIZE 3

// 구조체 함수 사용 백터 합 구하기

struct vector
{
    double x;
    double y;
};
struct vector get_vector_result(struct vector a, struct vector b);
int main(void) {
    
    struct vector a = { 2.0,3.0 };
    struct vector b = { 5.0,6.0 };
    struct vector sum;

    sum = get_vector_result( a, b);
    printf("백터의 합은 (%f, %f)입니다.", sum.x, sum.y);

    
    return 0;
}

struct vector get_vector_result(struct vector a, struct vector b) {
    
    struct vector result;

    result.x=a.x + b.x;
    result.y=a.y + b.y;

    return result;
}