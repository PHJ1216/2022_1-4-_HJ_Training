#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#define SIZE 10

// 1차원 배열 합 계산 함수
int get_arr_sum(int* A, int size); //함수 선언

int main(void)
{
	int data[SIZE] = { 1,2,3,4,5,6,7,8,9,0 };
	
	printf("배열 요소의 합 : %d",get_arr_sum(data, SIZE)); //*A=data
	return 0;

}

int get_arr_sum(int *A, int size) //함수 정의
{
	int sum = 0;
	
	for (int j = 0; j < size; j++) {
		sum =sum+ A[j];
	}
	return sum;
}

