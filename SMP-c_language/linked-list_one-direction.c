#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
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

void delete_linked_list(LIST* pList)
{
	while (pList->head != NULL)
		delete_node(pList, pList->head);
}

void insert_node(LIST* pList, NODE* pPre, int data)
{
	NODE* temp = (NODE*)malloc(sizeof(NODE));
	temp->data = data;
	
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

void delete_node(LIST* pList, NODE* pos) {
	NODE* temp;

	if (pList->head == pos) { /* if we wanna delete the first NODE */
		pList->head = pos->next; /* it is NULL */
		free(pos);
	}
	else {
		for (temp = pList->head; temp != NULL; temp = temp->next) {
			if (temp->next == pos) {
				temp->next = pos->next;
				free(pos);
				(pList->count)--;
				return;
			}
		}
		if (temp == NULL) {
			printf("No such position %p in this linked list!\n", pos);
			return;
		}
	}
}

int main() {


	return 0;
}