#include<stdio.h>

int fibo(int N);

int main(void) {
	int RESULT;
	int N = 10;

	RESULT = fibo(10);
	
	printf("N번째 피보나치 수: %d", RESULT);

	return 0;
}

int fibo(int N) {
	int RESULT;
	if (N == 0) return 0;
	if (N == 1) return 1;

	RESULT = fibo(N - 1) + fibo(N - 2);

	return RESULT;
}