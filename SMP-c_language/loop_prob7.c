#include<stdio.h>

int main() {
	// ������ �ڿ��� n�� �޾� n�� ���μ����� �� ����� ����Ѵ�.
	int n;
	printf("�ڿ��� N�� �Է��ϼ���: ");
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