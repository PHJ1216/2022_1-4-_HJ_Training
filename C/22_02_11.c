#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

// ���� ����ü �迭 ������ Ȱ�� ���α׷�
struct uni
{
	double grade;
	char class[100];
};
int main(void) {
	
	// �ڽ��� ��ǥ ���� ���� �ۼ� ���α׷�
	struct uni *p;
	int num=0;
	printf("���ǰ� �� ���ΰ���? : ");
	scanf("%d", &num);  // ���� �޸� ũ�� �Է�

	p = (struct uni*)malloc(num * sizeof(struct uni));
	if (p == NULL) {
		printf("�޸� �Ҵ� ���� !\n");
		exit(1);
	}

	for (int i = 0; i < num; i++) { 
		printf("���� �̸� : ");
		scanf("%s", p[i].class);  //�迭�� �����ϰ� ���� �״�� �ۼ�
		printf("\n");
		printf("���� ��ǥ ���� : ");
		scanf("%lf", &p[i].grade);
		printf("\n");
		printf("======================================");
		printf("\n");
	}

	free(p);



	return 0;
}