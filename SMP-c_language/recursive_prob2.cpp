#include<stdio.h>

/* make a reverse pyrimid */

void make(int N);

int main() {
	int num;

	printf("�� ���� �Ƕ�̵�?: ");
	scanf_s("%d", &num);

	make(num);
	return 0;
}

void make(int N) {

	if (N == 0) return;
	else {
		for (int i = 0; i < N; i++) printf("*");
		printf("\n");
		make(N - 1);
	}
}