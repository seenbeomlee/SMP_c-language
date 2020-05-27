#include <stdio.h>
#define ARY_SIZE 10

int seq_search(int list[], int last, int target, int* pidx);

int main() {
	int arr[ARY_SIZE] = { 3, 4, 1, 7, 8, 9, 6, 10, 11, 15 };
	int target, index;
	int fount;

	printf("Input an integer that you want to find: ");
	scanf("%d", &target);

	fount = seq_search(arr, ARY_SIZE - 1, target, &index);
	if (fount) /* if fount == 1 we found it */
		printf("The index of %d is %d.\n", target, index); /* we will used the index vairable */
	else /* if not, we didn't found it */
		printf("Not Fount.\n");

	return 0;
}

int seq_search(int list[], int last, int target, int* pidx)
{
	int looker;
	int fount;

	looker = 0;
	while (looker <= last&& list[looker] != target)
		looker++;

	*pidx = looker;

	fount = looker == last + 1 ? 0 : 1;

	return fount;
}