#include<stdio.h>

int main() {
	// 임의의 자연수 n을 받아 n을 소인수분해 한 결과를 출력한다. //
	int n;
	int i = 2;
	printf("자연수 N을 입력하세요: ");
	scanf("%d", &n);
	
	printf("%d = ", n);

	while(1) {

		if (i == n) break;

		if (n % i == 0) {
			n /= i;
			printf("%d x ", i);
			continue;
		}
		else {
			i++;
		}
	}
	printf("%d\n\n\n\n", n);
	return 0;
}