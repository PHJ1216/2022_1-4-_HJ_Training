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
	if (x > y) {
		return x;
	}
	else  {
		return y;
	}
	
}
int main(void){
	int a, b;
	a = get_int();
	b = get_int();

	printf("MAX값은 %d", find_max(a, b));
 
	return 0;
}