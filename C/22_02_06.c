#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#define num "apple"
// ���� �ѿ����� ���� ���α׷�

int main(void) {

	char dic[5][2][30] = {// dic[i][j][k] i�� �� j�� �࿡�� ���ڿ� 2�� k�� �ش� �࿡ ���� �޸�ũ�� 
		{"computer","��ǻ��"},
		{"c programming","c���"},
		{"java","�ڹ�"},
		{"phython","���̽�"},
		{"hyeonjun","����"}
	};
	char ans[1][30];
	while (1) {
		printf("�ѱ��� �Է��ϼ���");
		scanf("%s", ans);
		for (int i = 0; i < 5; i++) {
			if (strcmp(dic[i][1],ans)==0) {
				printf("%s�� ����� �ϸ� %s�Դϴ�.\n",ans[0], dic[i][0]);
				return 0;
			}
			
		}
	}
	return 0;
}