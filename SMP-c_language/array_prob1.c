/* array prob */
/* This is a program for finding prime numbers. */
/* Fill in the blacks to find #1000 prime numbers  */

#include <stdio.h>
int main() {
    
    int temp = 5; 
    int prime[1000]; 
                        
    int index = 1; /* index for array */
    int i;        
    int ok; /* index for what? */
    prime[0] = 2;
    prime[1] = 3;
    for (;;) {
        ok = 0;
        for (i = 0; i <= index; i++) {
            if (temp % prime[i] != 0) {
                ok++;
            }
            else {
                break;
            }
        }
        if (ok == (index + 1)) {
            prime[ok] = temp;
            index++;
            printf("number : %d \n", prime[index]);
            if (index == 999) break;
        }
        temp += 2;
    }
    return 0;
}

