#include <stdio.h>
int main() {
	int num;

	printf("�� ���� �ﰢ���� ����̴ϱ�? ");

	scanf_s("%d", &num);

	for (int i = num; i >= 1; i--) { // prob1�� ���⸸ ����
		for (int j = 0; j < num - i; j++) {
			printf(" ");
		}

		for (int j = 0; j < i * 2 - 1; j++) {
			printf("*");
		}

		for (int j = 0; j <= num - i; j++) {
			printf(" ");
		}
		printf("\n");
	}

	return 0;
}