/* input "Hello Baby" and see */

#include <stdio.h>
int main() {
    char str1[10], str2[10];
    char c;

    printf("문자열을 입력하세요 : ");
    scanf("%s", str1);
    printf("입력한 문자열 : %s \n", str1);

    printf("문자열을 입력하세요 : ");
    scanf("%s", str2);
    printf("입력한 문자열 : %s \n", str2);

    scanf("%c", &c);
    printf("입력받은 c값을 출력합니다: %c", c);

    return 0;
}