#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int primeFC(int n);  //함수 선언문


int main(void)
{
    int i = 0;
    for (i = 1; i <= 100; i++) //i를 1부터 100까지 1씩 증가시키며 반복 수행
    {
        if (primeFC(i)) //i가 소수라면
        {
            printf("%3d ", i); //i를 출력
        }
    }
    printf("\n");
    return 0;
}

//함수명: primeFC
//입력 인자로 전달받은 n이 소수인지 확인하는 함수

int primeFC(int n) //함수 정의문
{
    int i = 0;
    int last = n / 2;   //약수가 없는 수가 소수이므로 2부터 n/2까지만 확인하면 됨
    if (n <= 1)//소수는 1보다 큰 자연수여야 함
    {
        return 0;//반환값0: 소수가 아님
    }
    //(자기자신/2)보다 큰수는 약수가 될 수 없음
    for (i = 2; i <= last; i++) //i를 2부터 last까지 1씩 증가시키며 반복 수행
    {
        if ((n % i) == 0) //n을 i로 나누었을때 나머지가 0이면 소수 아님
        {
            return 0; //반환값0: 소수가 아님
        }
    }
    return 1; //1~last사이에 약수가 없음 반환값1: 소수임
}