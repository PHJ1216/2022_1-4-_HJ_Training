#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

// 동적 메모리 사용자가 입력하는 크기의 배열 만들기

int main(void) {

    char* pc;
    int num;
    printf("항목의 개수는 몇 개? : ");
    scanf("%d", &num);
    pc = (char*)malloc(num * sizeof(int)); //num의 크기만큼 배열 생성
    if (pc == NULL) {
        printf("메모리 할당 실패");
        exit(1);
    }
    for (int i = 0; i < num; i++) {
        printf("항목<정수> 입력 : ");
        scanf("%d", &pc[i]);  //*pc=1,*(p+1)=2를 배열로 나타냄 각각 pc[0]=1,pc[1]=2
        printf("\n");
    }
    printf("\n");
    printf("입력된 값은 다음과 같습니다.\n");
    for (int j = 0; j < num; j++) {
        printf("%d  ",pc[j]);
    }
    free(pc);

    return 0;
}