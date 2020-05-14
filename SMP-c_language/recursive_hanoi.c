#include<stdio.h>

void hanoi(int N, int start, int to, int through, int count);

int main() {

	int N = 3;
	int count = 0;
	hanoi(N, 1, 3, 2, count);
	return 0;
}

void hanoi(int N, int start, int to, int through, int count) {

	if (N == 1) {
		printf("{%d번} 원반을 {%d}에서 {%d}로 이동\n", N, start, to);
		count++;
		return;
	}

	hanoi(N - 1, start, through, to, count);
	printf("{%d번} 원반을 {%d}에서 {%d}로 이동\n", N, start, to);
	count++;
	hanoi(N - 1, through, to, start, count);
}