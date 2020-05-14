#include <stdio.h>
#define ARY_SIZE 10

/* find the biggest element in the array */
/* the array contents are followed */
/*  [0] [1] [2] [3] [4] [5] [6] [7] [8] [9]  */
/*   0   5   7   3   2   6   9   1   4   8   */

int get_max(int arr[], int size);

int main()
{
    int list[ARY_SIZE] = {0, 5, 7, 3, 2, 6, 9, 1, 4, 8 }; /* fill in the blank  */
    int max_value;

    max_value = get_max(list, ARY_SIZE);

        printf("MAX = %d\n", max_value);

    return 0;
} 

int get_max(int arr[], int size)
{
    int i;
    int max = arr[0]; /* fill in the blank */

    for (i = 1; i < size; i++)
    {
        if (max < arr[i] ) /* fill in the blank */
        {
            max = arr[i];
        }
    }

    return max;
}
