#include<stdio.h>

int main() {

		double f;
		int i;
		printf("�Ǽ��� �Է��ϼ���.\n");
		scanf_s("%lf", &f);
		if (f < 0) {
			f *= -1;
		}
		i = (100 * (f - (int)f));
		printf("i=%d\n", i);
		return 0;
	

	return 0;
}