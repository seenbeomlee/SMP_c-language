/* Array and Loop prob */
/* Fill in the black */
#include <stdio.h>
int main() {
    
    int temp = 5; 
    int array[1000]; 
                        
    int index = 1; 
    int i;        
    int ok;        
    array[0] = 2;
    array[1] = 3;
    for (;;) {
        ok = 0;
        for (i = 0; i <= index; i++) {
            if (temp % array[i] != 0) {
                /* Fill in the black */
            }
            else {
                break;
            }
        }
        if (ok == (index + 1)) {
            /* Fill in the black */
            /* Fill in the black */
            printf("number : %d \n", array[index]);
            if (index == 999) break;
        }
        temp += 2;
    }
    return 0;
}

