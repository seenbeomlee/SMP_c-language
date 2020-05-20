#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node
{
	int mid;
	int final;
	char name[10];
	float avg;
	char grade;
	struct node* next;
};

typedef struct node NODE;

struct list {
	int count;
	NODE* head;
};

typedef struct list LIST;

void init_list(LIST* plist) {
	plist->count = 0;
	plist->head = NULL;
}

void insert_node(LIST* pList, NODE* pPre, NODE input)
{
	NODE* temp = (NODE*)malloc(sizeof(NODE));
	temp->mid = input.mid;
	temp->final = input.final;
	temp->grade = input.grade;
	temp->avg = input.avg;
	strcpy(temp->name, input.name);

	if (pPre == NULL) {
		temp->next = pList->head;
		pList->head = temp;
	}
	else
	{
		temp->next = pPre->next;
		pPre->next = temp;
	}

	(pList->count)++;
}

void print_list(LIST* plist) {
	NODE* temp;
	int index = 1;
	if (plist->head == NULL) return;

	printf("번호   이름     중간   기말   평균   <학점>\n");

	for (temp = plist->head; temp != NULL; temp = temp->next) {
		printf(" %d      %s        %d      %d      %.2f      %c\n", index, temp->name, temp->mid, temp->final, temp->avg, temp->grade);
		index++;
	}
}

NODE* find_list(LIST* plist, char* name1) {
	NODE* temp;

	printf("번호   이름     중간   기말   평균   <학점>\n");

	for (temp = plist->head; temp != NULL; temp = temp->next) {
		if (!strcmp(temp->name, name1)) return temp;
	}

	return NULL;
}

int main() {

	char input[10];
	LIST list;
	LIST* plist = &list;
	init_list(plist);
	char trash;

	while (1) {
		printf(">> ");
		scanf("%s", input);
		if (!strcmp(input, "add")) {
			NODE temp;
			NODE* pre;
			printf("이름: ");
			scanf("%s", temp.name);
			printf("중간고사: ");
			//scanf("%c", &trash);
			scanf("%d", &temp.mid);
			printf("기말고사: ");
			scanf("%d", &temp.final);
			temp.avg = (temp.mid + temp.final) / 2.0;
			
			if (temp.avg >= 90.0) temp.grade = 'A';
			else if (temp.avg >= 80.0) temp.grade = 'B';
			else if (temp.avg >= 70.0) temp.grade = 'C';
			else if (temp.avg >= 60.0) temp.grade = 'D';
			else temp.grade = 'F';

			printf("\n");

			if (plist->head == NULL) insert_node(plist, NULL, temp);

			else {
				if(plist->head->avg <= temp.avg) insert_node(plist, NULL, temp);
				else
				{
					for (pre = plist->head; pre->next != NULL; pre = pre->next) {
						if (pre->next->avg <= temp.avg) break;
					}
					insert_node(plist, pre, temp);
				}
			}
			continue;
		}
		else if (!strcmp(input, "print")) {
			print_list(plist);
			printf("\n");
			continue;
		}
		else if (!strcmp(input, "find")) {
			printf("이름: ");
			scanf("%s", input);
			scanf("%c", &trash);
			NODE* temp;
			temp = find_list(plist, input);

			if (temp == NULL) continue;

			printf(" 1      %s        %d      %d      %.2f      %c\n", temp->name, temp->mid, temp->final, temp->avg, temp->grade);
			printf("\n");
			continue;
		}
		else if (!strcmp(input, "quit")) {
			return 0;
		}
		else continue;
	}
}