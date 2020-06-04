#include<stdio.h>
#include<string.h>

int is_palindrome(char* str) {
	int n, length = strlen(str);

	for (n = 0; n < length / 2; n++) /* we will check half and half */
		if(str[n] != str[length-n-1]) /* -1 for except "NULL" */
			return 0;
	return 1;
}

char* make_palindrome(char* str) {
	int n, length = strlen(str);

	for (n = 0; n < length - 1; n++) /* we dont need to do it for last char */
		str[length + length - n - 2] = str[n]; /* if "race" n goes up to "rac" which index is '2', and "racecar" r's index is '6' */
	str[length + length] = '\0'; /* it is string !! */
	return str;
}


int main() {
	char inStr[][255] = { "noon", "refer", "mad", "race" };
	/* printf("%d\n", strlen("noon")); if returns 4 */
	for (int i = 0; i < 4; i++) {
		if (is_palindrome(inStr[i])) printf("%s\n", inStr[i]);
		else printf("%s\n", make_palindrome(inStr[i]));
	}
	return 0;
}