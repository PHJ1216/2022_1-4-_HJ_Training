#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

// ���� �迭�� ������ ä��� ���α׷�

int main(void) {
	int* dm;
	dm = (int*)malloc(1000 * sizeof(int));
	for (int i = 0; i < 1000; i++) {
		dm[i] = rand(); // ������ �������� ���� �߻�
	}

	for (int x = 0;x<=1000;x++) {
		for (int y = 0;y<1000;y++) {
			if (dm[y] > dm[y + 1]) { // ���� ������ �̿��� �ִ� ���ϱ�
				int tmp = dm[y];
				dm[y] = dm[y + 1];
				dm[y + 1] = tmp;
			}
		}
	}
	printf("MAX : %d", dm[999]);
	free(dm);
	return 0;
}