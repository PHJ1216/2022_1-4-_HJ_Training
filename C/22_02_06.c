#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

// 지정된 문자열 맞추기(행맨게임)

int main(void) {

	char solution[] = "happy new year"; 
	char answer[] = "_____ ___ ____";
	char ch;
	
	while (1) {
			printf("현재 : %s\n", answer);
			printf("문자 입력 : ");
			ch = getch();
		
		for (int i = 0; solution[i] != NULL; i++) // i가 0부터 solution배열의 NULL을 찾을 때 까지
		{
			
			if (solution[i] == ch) { //solution이 입력한 문자와 같은 것을 발견하면
				answer[i] = ch;  // answer도 같은 자리에 문자를 대입하겠다
			}
		}

		if (strcmp(solution,answer)==0) { //똑같은 문자열이 되면 break
			break;
		}
	}

	return 0;
}