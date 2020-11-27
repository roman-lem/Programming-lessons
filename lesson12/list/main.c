#include "list.h"

//==========================================================================

int main(){

	list_t *head = Construct(3);

	Fill(head);

	addFirst(&head, 44);

	addLast(head, 55);

	Dump(head);

	int key = 0;

	printf("key = ");
	scanf("%d", &key);

	addBefore(&head, key, 66);

	Dump(head);
}