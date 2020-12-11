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

	if(head == NULL){

		printf("head [%p]\n", head);

		return;		
	}

	printf("head [%p] ->\n", head);

	list_t *current = head;

	int i;
	for(i = 0; current->next != NULL; i++){

		printf("-> (%d) [%p] ->\n", current->elem, current->next);

		current = current->next;
	}

	printf("-> (%d) [%p]\n", current->elem, current->next);	

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

	free(prev);

	return;
}

//--------------------------------------------------------------------------

void addAfter(list_t *head, int key, int elem){

	list_t *current = head;

	while(current != NULL && current->elem != key){

		current = current->next;
	}

	list_t *temp = (list_t*) calloc(1, sizeof(list_t));

	temp->next = current->next;

	temp->elem = elem;

	current->next = temp;

	return;
}

void rmFirst(list_t **head){

	list_t *temp = (list_t*) calloc(1, sizeof(list_t));

	temp = (*head)->next;

	free(*head);

	*head = temp;

	return;
}

//--------------------------------------------------------------------------

void rmLast(list_t *head){

	list_t *current = head;

	while((current->next)->next != NULL){

		current = current->next;
	}

	free(current->next);

	current->next = NULL;

	return;
}

//--------------------------------------------------------------------------

void rmSel(list_t **head, int elem){

	list_t *current = *head;

	if(current->elem == elem){

		*head = current->next;

		free(current);

		return;
	}

	while(current != NULL && (current->next)->elem != elem){

		current = current->next;
	}

	if(current == NULL)
		return;

	list_t *temp = (list_t*) calloc(1, sizeof(list_t));

	temp = current->next;

	current->next = temp->next;

	free(temp);

	return;
}

//--------------------------------------------------------------------------

void makeLog(list_t *head, char* fileName){

	FILE *file = fopen(fileName, "w");

	if(head == NULL){

		fprintf(file, "head [%p]\n", head);

		return;		
	}

	fprintf(file, "head [%p] ->\n", head);

	list_t *current = head;

	int i;
	for(i = 0; current->next != NULL; i++){

		fprintf(file, "-> (%d) [%p] ->\n", current->elem, current->next);

		current = current->next;
	}

	fprintf(file, "-> (%d) [%p]\n", current->elem, current->next);	

	return;
}

//--------------------------------------------------------------------------

void Destruct(list_t **head){

	list_t *current = *head;

	while(*head != NULL){

		*head = current->next;

		free(current);

		current = *head;
	}
}

//==========================================================================