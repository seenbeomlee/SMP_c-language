#include<stdio.h>

struct node
{
	int data;
	struct node* next;
	struct node* prev;
};

typedef struct node NODE;

struct list {
	int count;
	NODE* head;
	NODE* tail;
};

typedef struct list LIST;