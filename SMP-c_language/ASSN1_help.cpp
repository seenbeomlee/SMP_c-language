#include <stdio.h>
#include<stdlib.h>
#include<time.h>

void print_info();

void start_game();

void get_swing_result();


int main() {

	int input;

	/* for random variables */
	srand(time(NULL));
	/* for random variables */

	while (1) {
		for (int i = 0; i < 50; i++) printf("=");
		printf("\n\n");
		printf("                  1. 게임 시작\n\n");
		printf("                  2. 게임 설명\n\n");
		printf("                  3. 게임 종료\n\n");
		for (int i = 0; i < 50; i++) printf("=");
		printf("\n");
		printf("선택하고자 하는 메뉴를 입력하세요: ");
		scanf("%d", &input);

		switch (input) {

		case 1:
			/* start_game(); */
			get_swing_result();
			continue;

		case 2:
			system("cls");
			print_info();
			printf("\n메인 메뉴로 돌아가기(-1): ");
			scanf("%d", &input);
			if (input == -1) {
				system("cls");
				continue;
			}

		case 3:
			printf("프로그램을 종료합니다...");
			return 0;

		default:
			printf("메뉴를 다시 선택해주세요.");
			continue;
		}
	}

	start_game();
	return 0;
}

void print_info() {
	for (int i = 0; i < 20; i++) printf("-");
	printf("미니 야구 게임 설명");
	for (int i = 0; i < 20; i++) printf("-");
	printf("\n\n");
	printf("설명 설명 설명");
	printf("\n\n");
	for (int i = 0; i < 50; i++) printf("-");
}

void start_game() {

}

void get_swing_result() {
	char in;

	while (1) {
		int RESULT = rand() % 100;

		if (RESULT < 14) printf("안타");
		else if (RESULT < 21) printf("2루타");
		else if (RESULT < 26) printf("3루타");
		else if (RESULT < 29) printf("홈런");
		else if (RESULT < 62) printf("플라이 아웃");
		else printf("스트라이크");

		printf("다음 결과를 보시겠습니까?(Y/N): ");
		scanf("%c", &in);
		scanf("%c", &in);
		if (in == 'Y') continue;
		else return;
	}
}