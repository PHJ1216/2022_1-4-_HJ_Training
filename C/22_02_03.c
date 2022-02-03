#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
// 거급제곱 계산 함수

int impower(int n, int k); //함수 선언
int b;
int sum = 1;
int main(void)
{
    int a;
    printf("정수 n입력 및 거듭 수 k 입력 : ");
    scanf("%d %d", &a, &b);
    for (int j = 0; j <= b; j++) {
        printf("%d \n", impower(a,j));
    }
    return 0;
}

int impower(int n,int k) //함수 정의문
{
        if ( k == 0)  { // k가 0이면 반환값 1
            sum = 1;
            return sum;
        }
        else {          // k가 0이상인 숫자면 거급 제곱
            sum = sum * n;
            return sum;
        }
  
}