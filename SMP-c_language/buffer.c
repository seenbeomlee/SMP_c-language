/* input "Hello Baby" and see */

#include <stdio.h>
int main() {
    char str1[10], str2[10];
    char c;

    printf("���ڿ��� �Է��ϼ��� : ");
    scanf("%s", str1);
    printf("�Է��� ���ڿ� : %s \n", str1);

    printf("���ڿ��� �Է��ϼ��� : ");
    scanf("%s", str2);
    printf("�Է��� ���ڿ� : %s \n", str2);

    scanf("%c", &c);
    printf("�Է¹��� c���� ����մϴ�: %c", c);

    return 0;
}