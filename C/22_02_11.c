#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

// ���� �޸� ����ڰ� �Է��ϴ� ũ���� �迭 �����

int main(void) {

    char* pc;
    int num;
    printf("�׸��� ������ �� ��? : ");
    scanf("%d", &num);
    pc = (char*)malloc(num * sizeof(int)); //num�� ũ�⸸ŭ �迭 ����
    if (pc == NULL) {
        printf("�޸� �Ҵ� ����");
        exit(1);
    }
    for (int i = 0; i < num; i++) {
        printf("�׸�<����> �Է� : ");
        scanf("%d", &pc[i]);  //*pc=1,*(p+1)=2�� �迭�� ��Ÿ�� ���� pc[0]=1,pc[1]=2
        printf("\n");
    }
    printf("\n");
    printf("�Էµ� ���� ������ �����ϴ�.\n");
    for (int j = 0; j < num; j++) {
        printf("%d  ",pc[j]);
    }
    free(pc);

    return 0;
}