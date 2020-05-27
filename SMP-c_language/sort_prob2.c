/* sort an array of integers in an ascending order using a bubble sort.
	it will be start from back-side of the array */

/*	this is just test code */

#include<stdio.h>

void swap(int* first, int* second); /* swap the value */

void print_array(int list[], int last); /* print elements of the array from index 0 to last */

void bubble_sort(int list[], int last) {
	int cur, walk;

	for (cur = 0; cur < last; cur++)
	{
		for (walk = last; walk > cur; walk--)
			if (list[walk] < list[walk -1])
				swap(&list[walk], &list[walk-1]);
		
		printf("[step %d] : ", cur + 1);
		print_array(list, last);
	} // for cur
	return;
}


/*	this is just test code */