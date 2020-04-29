#include<stdio.h>

/* make a pyrimid */

void make(int N);

int main() {
	int num;

	printf("몇 줄의 피라미드?: ");
	scanf_s("%d", &num);

	make(num);
	return 0;
}

void make(int N) {

	if (N == 0) return;
	else {
		make(N - 1);
		for (int i = 0; i < N; i++) printf("*");
		printf("\n");
	}
}

/* How about make reverse Pyrimid ? */
/* Let's practice for it */
/* I will give you 5 minutes */