#include <stdio.h>
#include<stdlib.h>
#include<time.h>
//
int main()
{
	int iCount;
	float x;
	// int seed;
	// seed = time(NULL);
	// srand(seed);

	printf("������ �ִ밪 = %d \n", RAND_MAX);

	for (iCount = 0; iCount < 10; iCount++) {
		printf("���� �� %d = %d\n", iCount, rand());
	}

	

	/*
	x = rand() / (float)RAND_MAX;

	printf("x = %f\n", x);
	*/
	
	

	return 0;
}

