#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
// �迭�� �̸��� �� ������ �迭�� �����ʹ� ģ�� ����
int main(void)
{
	int a[10] = { 1,2,3,4,5,6 };
	int* p = a;
	int* q = a + 3;

	printf("%d\n",*( a+1)); //a+1 a[1] a+1
	printf("%d\n",*( p+2)); //p+2 a[2] a+2
	printf("%d\n",*( q+3)); //q+3 a[6] a+3+3
	return 0;
}
