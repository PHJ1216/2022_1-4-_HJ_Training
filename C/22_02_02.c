#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int sum = 0;
// for �ݺ��� �Լ��� �ۼ�

// �Լ� ���� ����
int for_(int x, int y);

int main(void){

	int i, j;
	printf("for�� ���� �� �Է� : ");  
	scanf("%d", &i);
	printf("\n");
	printf("for�� �� �� �Է� : "); //*n���� ����� �� n+1 �Է�*
	scanf("%d", &j);
	printf("\n");
	printf("%d~%d ���� �� : %d",i,(j-1), for_(i,j));
	return 0;
}
// for�� �Լ� ����
int for_(int x, int y) {
	

	if (x == y) {
		return sum;
	}
	else {
		sum = sum + x;
		x++;
		return for_(x, y);
	}

	return;
}