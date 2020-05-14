#include <stdio.h>

void reverseInt(int n);

int main(void) {

	int input;
	printf("입력 : ");
	scanf("%d", &input);
	printf("출력 : ");
	reverseInt(input);

	return 0;
}

void reverseInt(int n) {

	if (n == 0) return;
	printf("%d", n % 10);
	reverseInt(n / 10);
}