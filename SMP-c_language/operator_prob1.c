#include<stdio.h>

void add(int x, int y);

void sub(int x, int y);

void mul(int x, int y);

void div(int x, int y);

int main() {

	int a, b;
	char c, temp;

	printf("�̰��� ���� �Դϴ�. ����� ������ �Է����ּ��� : ");
	scanf_s("%d", &a);
	scanf_s("%c", &temp);
	scanf_s("%c", &c);
	scanf_s("%c", &temp);
	scanf_s("%d", &b);

	if (c == 43) add(a, b);
	if (c == 45) sub(a, b);
	if (c == 42) mul(a, b);
	if (c == 47) div(a, b);

	return 0;
}

void add(int x, int y) {

	printf("%d + %d = %d �Դϴ�.",x, y, x + y);
}

void sub(int x, int y) {
	printf("%d - %d = %d �Դϴ�.",x, y, x - y);
}

void mul(int x, int y) {
	printf("%d * %d = %d �Դϴ�.",x, y, x * y);
}

void div(int x, int y) {
	float result;
	result = x / (float)y;
	printf("%d / %d = %.2f �Դϴ�.",x , y, result);
}