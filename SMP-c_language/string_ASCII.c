#include<stdio.h>

char* str_to_upper(char* str) {
	char* tmp = str;

	while (*tmp != NULL) {
		if (*tmp > 96 && *tmp < 123)
			*tmp -= 32;
		tmp++;
	}
	return str;
}

char* str_to_lower(char* str) {
	char* tmp = str;

	while (*tmp != NULL) {
		if (*tmp > 64 && *tmp < 91)
			*tmp += 32;
		tmp++;
	}
	return str;
}

int main() {
	char str[100];

	printf("Input string: ");
	gets(str);

	printf("Upper: %s\n", str_to_upper(str));
	printf("Lower: %s\n", str_to_lower(str));

	return 0;
} //