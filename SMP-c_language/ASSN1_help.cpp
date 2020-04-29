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
		printf("                  1. ���� ����\n\n");
		printf("                  2. ���� ����\n\n");
		printf("                  3. ���� ����\n\n");
		for (int i = 0; i < 50; i++) printf("=");
		printf("\n");
		printf("�����ϰ��� �ϴ� �޴��� �Է��ϼ���: ");
		scanf("%d", &input);

		switch (input) {

		case 1:
			/* start_game(); */
			get_swing_result();
			continue;

		case 2:
			system("cls");
			print_info();
			printf("\n���� �޴��� ���ư���(-1): ");
			scanf("%d", &input);
			if (input == -1) {
				system("cls");
				continue;
			}

		case 3:
			printf("���α׷��� �����մϴ�...");
			return 0;

		default:
			printf("�޴��� �ٽ� �������ּ���.");
			continue;
		}
	}

	start_game();
	return 0;
}

void print_info() {
	for (int i = 0; i < 20; i++) printf("-");
	printf("�̴� �߱� ���� ����");
	for (int i = 0; i < 20; i++) printf("-");
	printf("\n\n");
	printf("���� ���� ����");
	printf("\n\n");
	for (int i = 0; i < 50; i++) printf("-");
}

void start_game() {

}

void get_swing_result() {
	char in;

	while (1) {
		int RESULT = rand() % 100;

		if (RESULT < 14) printf("��Ÿ");
		else if (RESULT < 21) printf("2��Ÿ");
		else if (RESULT < 26) printf("3��Ÿ");
		else if (RESULT < 29) printf("Ȩ��");
		else if (RESULT < 62) printf("�ö��� �ƿ�");
		else printf("��Ʈ����ũ");

		printf("���� ����� ���ðڽ��ϱ�?(Y/N): ");
		scanf("%c", &in);
		scanf("%c", &in);
		if (in == 'Y') continue;
		else return;
	}
}