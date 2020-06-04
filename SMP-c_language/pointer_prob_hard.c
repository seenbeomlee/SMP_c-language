#include<stdio.h>

int g = 0;
void func(int* n);

int main() {

	/* left problem */
	int a = 0;

	func(&a);
	func(&a);

	printf("%d\n", a);
	printf("%d\n", g);
	{
		int g = 1;
		printf("%d\n", g);
	}
	printf("%d\n", g);

	/* right problem */
	char arr[][6] = { "cs101", "final", "exam", "is", "easy" };

	printf("%s\n", arr[2]);
	printf("%c\n", *(&arr[3][1]-1));
	printf("%c\n", (*(arr+4))[2]);
	printf("%c\n", ((char*)arr)[6]);
	printf("%s\n", arr[1]+1);
	printf("%c\n", *(*(arr+2)+1));
	
	return 0;
}

void func(int* n) {
	static int s = 1;
	g = g + s;
	(*n)++;
	s++;
}