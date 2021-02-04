#include <string.h>
#include "list.h"

//==========================================================================

int main(){

	int cap = 0;

	printf("Enter number of elements:\nn = ");
	scanf("%d", &cap);

	list_t *head = Construct(cap);

	printf("Enter elements:\n");
	Fill(head);

	printf("Pleas, enter the command :\n \
addFirst  \n \
addLast   \n \
addBefore \n \
addAfter  \n \
rmFirst   \n \
rmLast    \n \
rmSel     \n \
Dump      \n \
makeLog   \n \
Destruct  \n:");

	char command[100];
  scanf("%s", command);

  while(strcmp(command, "Destruct") != 0){

  	if(strcmp(command, "makeLog") == 0){

  		makeLog(head, "Log.txt");
  	}

  	else if(strcmp(command, "Dump") == 0){

  		Dump(head);
  	} 

  	else if(strcmp(command, "addFirst") == 0){

  		int elem = 0;
  		printf("elem =");
  		scanf("%d", &elem);

  		addFirst(&head, elem);
  	}

  	else if(strcmp(command, "addLast") == 0){

  		int elem = 0;
  		printf("elem =");
  		scanf("%d", &elem);

  		addLast(head, elem);
  	}

  	else if(strcmp(command, "addBefore") == 0){

  		int key = 0;
  		printf("key =");
  		scanf("%d", &key);

  		int elem = 0;
  		printf("elem =");
  		scanf("%d", &elem);

  		addBefore(&head, key, elem);
  	}

  	else if(strcmp(command, "addAfter") == 0){

  		int key = 0;
  		printf("key =");
  		scanf("%d", &key);

  		int elem = 0;
  		printf("elem =");
  		scanf("%d", &elem);

  		addAfter(head, key, elem);
  	}

  	else if(strcmp(command, "rmFirst") == 0){

  		rmFirst(&head);
  	}

  	else if(strcmp(command, "rmLast") == 0){

  		rmLast(head);
  	}

  	else if(strcmp(command, "rmSel") == 0){

  		int key = 0;
  		printf("key =");
  		scanf("%d", &key);

  		rmSel(&head, key);
  	}

  	else{

  		printf(">>> Try again\n");
  	}

  	printf(":");
  	scanf("%s", command);

  }

  Destruct(&head);

	return 0;
}