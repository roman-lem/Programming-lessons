#include <stdio.h>
#include <stdlib.h>

//==========================================================================

typedef struct list {

	int elem;

	struct list *next;

} list_t;

//--------------------------------------------------------------------------

list_t* Construct(int num);

//--------------------------------------------------------------------------

void Dump(list_t *head);

//--------------------------------------------------------------------------

void Fill(list_t *head);

//--------------------------------------------------------------------------

void addFirst(list_t **head, int elem);

//--------------------------------------------------------------------------

void addLast(list_t *head, int elem);

//--------------------------------------------------------------------------

void addBefore(list_t **head, int key, int elem);

//--------------------------------------------------------------------------

void addAfter(list_t *head, int key, int elem);

//--------------------------------------------------------------------------

void rmFirst(list_t **head);

//--------------------------------------------------------------------------

void rmLast(list_t *head);

//--------------------------------------------------------------------------

void rmSel(list_t **head, int elem);

//--------------------------------------------------------------------------

void makeLog(list_t *head, char* fileName);

//--------------------------------------------------------------------------

void Destruct(list_t **head);

//==========================================================================

