#include <stdio.h>
#include<stdlib.h>
#include<time.h>
//
int main()
{
	int iCount;

	// int seed;
	// seed = time(NULL);
	// srand(seed);

	printf("������ �ִ밪 = %d \n", RAND_MAX);

	for (iCount = 0; iCount < 10; iCount++) {
		printf("���� �� %d = %d\n", iCount, rand());
	}

	return 0;
}

