#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

// ������ ���ڿ� ���߱�(��ǰ���)

int main(void) {

	char solution[] = "happy new year"; 
	char answer[] = "_____ ___ ____";
	char ch;
	
	while (1) {
			printf("���� : %s\n", answer);
			printf("���� �Է� : ");
			ch = getch();
		
		for (int i = 0; solution[i] != NULL; i++) // i�� 0���� solution�迭�� NULL�� ã�� �� ����
		{
			
			if (solution[i] == ch) { //solution�� �Է��� ���ڿ� ���� ���� �߰��ϸ�
				answer[i] = ch;  // answer�� ���� �ڸ��� ���ڸ� �����ϰڴ�
			}
		}

		if (strcmp(solution,answer)==0) { //�Ȱ��� ���ڿ��� �Ǹ� break
			break;
		}
	}

	return 0;
}