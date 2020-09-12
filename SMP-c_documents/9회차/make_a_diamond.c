#include<stdio.h>

int main() {

	int input;

	printf("최대 길이가 몇인 다이아몬드를 만들까요?(홀수): ");
	scanf("%d", &input);

	for (int i = 0; i < (input + 1) / 2; i++) {
		for (int j = 0; j < input / 2 - i; j++) printf(" ");
		for (int j = 0; j < 2 * i + 1; j++) printf("*");
		for (int j = 0; j < input / 2 - i; j++) printf(" ");
		printf("\n");
	}
	for (int i = (input - 2) / 2; i >= 0 ; i--) {
		for (int j = 0; j < input / 2 - i; j++) printf(" ");
		for (int j = 0; j < 2 * i + 1; j++) printf("*");
		for (int j = 0; j < input / 2 - i; j++) printf(" ");
		printf("\n");
	}

	return 0;
}