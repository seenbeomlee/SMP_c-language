#include<stdio.h>

void merge(int left, int right, int* arr);
void merge_sort(int left, int right, int* arr);

int main() {
	int arr[10] = { 200 , 0 , 13 , 55 , 70 , 164, 333, 2, 94, 150 };
	printf("초기 array: ");
	for (int i = 0; i < 10; i++) printf("%d ", arr[i]);
	merge_sort(0, 9, arr);
	printf("\n후기 array: ");
	for (int i = 0; i < 10; i++) printf("%d ", arr[i]);
}

void merge(int left, int right, int* arr) {
	int left_mid = (left + right) / 2;
	int right_mid = left_mid + 1;
	// ㅁㅁㅁ ㅁㅁㅁ 인 array를 3개 / 3개로 나누어 2개로 생각한다 // 
	int temp_arr[10];

	int a = left;
	int b = right_mid;
	int index = left;

	while (a <= left_mid && b <= right) {
		if (arr[a] >= arr[b]) temp_arr[index++] = arr[b++];
		else temp_arr[index++] = arr[a++];
	}

	while (a <= left_mid) {
		temp_arr[index++] = arr[a++];
	}

	while (b <= right) {
		temp_arr[index++] = arr[b++];
	}

	for (index = left; index <= right; index++)
		arr[index] = temp_arr[index];
}

void merge_sort(int left, int right, int* arr) {
	
	if (left < right) { /* if left >= right => size of array == 1*/
		int mid = (left + right) / 2;
		merge_sort(left, mid, arr); /* 재귀함수를 이용해 절반씩 나눠주는 과정 */
		merge_sort(mid + 1, right, arr);  /* 재귀함수를 이용해 절반씩 나눠주는 과정 */
		merge(left, right, arr);
	}
}