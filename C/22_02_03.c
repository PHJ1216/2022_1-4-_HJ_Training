#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
// �ű����� ��� �Լ�

int impower(int n, int k); //�Լ� ����
int b;
int sum = 1;
int main(void)
{
    int a;
    printf("���� n�Է� �� �ŵ� �� k �Է� : ");
    scanf("%d %d", &a, &b);
    for (int j = 0; j <= b; j++) {
        printf("%d \n", impower(a,j));
    }
    return 0;
}

int impower(int n,int k) //�Լ� ���ǹ�
{
        if ( k == 0)  { // k�� 0�̸� ��ȯ�� 1
            sum = 1;
            return sum;
        }
        else {          // k�� 0�̻��� ���ڸ� �ű� ����
            sum = sum * n;
            return sum;
        }
  
}