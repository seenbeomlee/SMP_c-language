#include<stdio.h>
#define ARY_SIZE 10

void set_min_prt(int* arr, int size, int** pmin);

int main()
{
	int arr[ARY_SIZE] = { 3, 4, 1, 7, 8, 9, 6, 10, 11, 15 };
	int* pmin; // variable to point the smallest elem in the arr

	set_min_prt(arr, ARY_SIZE, &pmin); /* blank */

	printf("Minimum is %d, \n", *pmin); /* blank */

	return 0;
}

void set_min_prt(int* arr, int size, int** pmin) {
	int i;
	*pmin = arr; /* blank */

	for (i = 1; i < size; i++) { /* blank */
		if ( **pmin > arr[i]) { /* blank */
			*pmin = &arr[i];
		}
	}
	return;
}