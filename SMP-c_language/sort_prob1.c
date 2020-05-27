/* sort an array of integers in an ascending order using a selection sort */

/*	this is just test code */

void selection_sort(int arr[], int size) {
	int smallest;
	int i, j;

	for (i = 0; i < size - 1; i++) {
		smallest = i; /* key point to fill the blanks */
		for (j = i + 1; j <= size - 1; j++)
			if (arr[smallest] > arr[j])
				smallest = j;
		swap_values(&arr[smallest], &arr[i]);
	}



}


/*	this is just test code */