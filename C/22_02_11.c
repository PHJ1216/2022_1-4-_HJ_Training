#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

// 동적 구조체 배열 포인터 활용 프로그램
struct uni
{
	double grade;
	char class[100];
};
int main(void) {
	
	// 자신의 목표 강의 학점 작성 프로그램
	struct uni *p;
	int num=0;
	printf("강의가 몇 개인가요? : ");
	scanf("%d", &num);  // 동적 메모리 크기 입력

	p = (struct uni*)malloc(num * sizeof(struct uni));
	if (p == NULL) {
		printf("메모리 할당 실패 !\n");
		exit(1);
	}

	for (int i = 0; i < num; i++) { 
		printf("강의 이름 : ");
		scanf("%s", p[i].class);  //배열로 간주하고 문법 그대로 작성
		printf("\n");
		printf("강의 목표 학점 : ");
		scanf("%lf", &p[i].grade);
		printf("\n");
		printf("======================================");
		printf("\n");
	}

	free(p);



	return 0;
}