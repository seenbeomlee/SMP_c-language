#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/* REFERENCE */
/* https://kldp.org/node/155830 */
/* https://kldp.org/node/135244 */

int temp() {

	int result;
	/* if i put 'srand()' here, it send same results !! */
	
	/* if we give time_delay then, it send differnet results !! */
	scanf("%d", &result);
	result = rand() % 100 + 1;

	if (result <= 14) return 1;
	else if (result <= 21) return 2;
	else if (result <= 26) return 3;
	else if (result <= 29) return 4;
	else if (result <= 62) return 5;
	else return 6;
}

int main() {
	int result, i;
	/* it can solve this problem */
    srand(time(NULL));
	 
	for (i = 0; i < 10; i++) {
		result = temp();
		printf("%d\n", result);
	}

	return 0;
}