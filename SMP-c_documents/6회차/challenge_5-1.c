#include <stdio.h>

struct stu {
	int grade;
	char name[3];
};

typedef struct stu stu;

int main(void) {
	int i;
	int j;

	stu arr[10];

	for (i = 0; i < 10; i++) {
		printf("%d번째 학생의 성적은?", i+1);
		scanf("%d", &(arr[i].grade));

		printf("%d번째 학생의 이름은?(2글자)", i + 1);
		scanf("%s", arr[i].name);


	}

	for (j = 100; j > 0; j--) {
		for (int i = 1; i <= 20; i++) {
			if (i % 2 == 0) printf("     ");
			else {
				if (arr[i / 2].grade >= j) printf("■");
				else printf("  ");
			}
		}
		printf("\n");
	}
	for (i = 0; i < 10; i++) printf("%s     ", arr[i].name);

	return 0;
}