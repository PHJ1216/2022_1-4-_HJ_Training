#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
// 함수를 이용해 MAX찾기

//입력 함수
int get_int() {
	int val;
	printf("정수 입력 : ");
	scanf("%d", &val);
	return val;
}
//if문 MAX찾기
int find_max(int x,int y) {
	int MAX;
	if (x > y) {
		MAX=x;
	}
	else if (x < y) {
		 MAX=y;
	}
	return MAX;
}
int main(void){
	int a, b;
	a = get_int();
	b = get_int();

	int r;
	r = find_max(a,b);
	printf("MAX값은 %d", r);


	return 0;
}