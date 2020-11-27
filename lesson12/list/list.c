#include "list.h"

//==========================================================================

list_t* Construct(int num){

	list_t *head = NULL, *current, *prev;

	int i;
	for(i = 0; i < num; i++){

		current = (list_t*) calloc(1, sizeof(list_t));

		if(head == NULL)
			head = current;

		else
			 prev->next = current;

		current->next = NULL;
		prev = current;
	}

	return head;
}

//--------------------------------------------------------------------------

void Dump(list_t *head){

	list_t *current = head;

	printf("list :\n");

	int i;
	for(i = 0; current != NULL; i++){

		printf("%d) %d [%p]\n", i, current->elem, current);

		current = current->next;
	}

	return;
}

//--------------------------------------------------------------------------

void Fill(list_t *head){

	list_t *current = head;

	while(current != NULL){

		scanf("%d", &current->elem);

		current = current->next;
	}

	return;
}

//--------------------------------------------------------------------------

void addFirst(list_t **head, int elem){

	list_t *current = (list_t*) calloc(1, sizeof(list_t));

	current -> elem = elem;

	current -> next = *head;

	*head = current;

	return;
}

//--------------------------------------------------------------------------

void addLast(list_t *head, int elem){

	list_t *current = head;

	while(current->next != NULL)
		current = current->next;

	current->next = (list_t*) calloc(1, sizeof(list_t));

	current = current->next;

	current->elem = elem;

	current->next = NULL;

	return;
}

//--------------------------------------------------------------------------

void addBefore(list_t **head, int key, int elem){

	list_t *current = *head;
	list_t *prev = (list_t*) calloc(1, sizeof(list_t));

	while(current != NULL && current->elem != key){

		prev = current;
		current = current->next;
	}

	if(current == NULL)
		return;

	if(current == *head){

		printf("cur == head\n");

		addFirst(head, elem);
		return;
	}

	list_t *temp = (list_t*) calloc(1, sizeof(list_t));

	temp->elem = elem;

	temp->next = current;

	prev->next = temp;

	return;
}

//==========================================================================