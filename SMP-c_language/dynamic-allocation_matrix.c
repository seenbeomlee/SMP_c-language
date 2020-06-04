#include<stdio.h>
#include<stdlib.h>

int main() {
	int size;
	int** matrix;
	
	printf("Enter the size of square: ");
	scanf("%d", &size);

	matrix = (int**)malloc(size * sizeof(int*));
	for (int i = 0; i < size; i++)
		matrix[i] = (int*)calloc(size, sizeof(int));

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (i == j) printf("  0");
			else if (i > j) printf(" -1");
			else printf("  1");
		}
		printf("\n");
	}
}