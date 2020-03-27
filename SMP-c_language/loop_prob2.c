#include <stdio.h>
int main() {
	int num;

	printf("몇 줄의 삼각형을 만들겁니까? ");

	scanf_s("%d", &num);

	for (int i = num; i >= 1; i--) { // prob1과 여기만 차이
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