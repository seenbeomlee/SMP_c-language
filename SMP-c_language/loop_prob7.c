#include<stdio.h>

int main() {
	// ������ �ڿ��� n�� �޾� n�� ���μ����� �� ����� ����Ѵ�. //
	int n;
	int i = 2;
	printf("�ڿ��� N�� �Է��ϼ���: ");
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