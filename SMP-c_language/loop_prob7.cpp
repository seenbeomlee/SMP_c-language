#include<stdio.h>

int main() {
	// 임의의 자연수 n을 받아 n을 소인수분해 한 결과를 출력한다.
	int n;
	printf("자연수 N을 입력하세요: ");
	scanf_s("%d", &n);
	
	printf("%d = ", n);

	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			n /= i;
			printf("%d x ", i);
		}
		else {
			i++;
		}
	}
	printf("%d", n);
	return 0;
}