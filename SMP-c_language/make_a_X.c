#include <stdio.h>

int main() {
	int input;

	/* height == 'maximum width * 4' and at the bottom of the flag, you need to make a block which has width == 'maximum width' */
	printf("최대 width가 몇인 깃발을 세울까요?: ");
	scanf("%d", &input);

	for (int i = 0; i < 4 * input - 1; i++) {
		if (i < input) {
			for (int j = 0; j <= i; j++) printf("*");
			printf("\n");
		}
		else if (i < 2 * input) {
			for (int j = i - input; j <= input; j++) printf("*");
			printf("\n");
		}
		else {
			printf("*");
			printf("\n");
		}
	}
	for (int i = 0; i < input; i++) printf("*");

	return 0;
}