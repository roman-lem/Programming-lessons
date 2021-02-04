#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//==========================================================================

typedef struct hashnode{

	long long int key;

	char data[20];

	struct hashnode *next;
} Node;

//--------------------------------------------------------------------------

long long int Hash (long long int key);

void Push (Node *tab[], long long int key, char name[20]);

void GetName (Node *tab[], long long int key);

void Remove (Node *tab[], long long int key);

//==========================================================================

long long int main (){

	Node *tab[7];

	long long int i;
	for (i = 0; i< 7; i++){

		tab[i] = NULL;
	}

	char Name[20];
	long long int key;

	char command[5];

	while (strcmp(command, "end") != 0){

		if (strcmp(command, "push") == 0){

			printf("Name Key:\n");
			scanf("%s %lld", Name, &key);

			Push (tab, key, Name);
		}

		else if (strcmp(command, "get") == 0){

			printf("Key:\n");
			scanf("%lld", &key);

			GetName (tab, key);
		}

		else if (strcmp(command, "rm") == 0){

			printf("Key:\n");
			scanf("%lld", &key);

			Remove (tab, key);
		}

		printf(">>> ");
		scanf("%s", command);
	}

	return 0;
}

//--------------------------------------------------------------------------

long long int Hash (long long int key){

	return key % 7;
}

//--------------------------------------------------------------------------

void Push (Node *tab[], long long int givenKey, char givenName[20]){

	long long int hash = Hash (givenKey);

	if (tab[hash] == NULL){

		tab[hash] = (Node*) calloc(1, sizeof(Node));

		if (tab[hash] == NULL)
			return;

		tab[hash] -> key = givenKey;

		strcpy(tab[hash] -> data, givenName);

		return;
	}

	Node *temp = tab[hash];

	while (temp -> next != NULL){

		temp = temp -> next;
	}

	temp -> next = (Node*) calloc(1, sizeof(Node));

	if (temp -> next == NULL)
		return;

	temp = temp -> next;

	temp -> key = givenKey;

	strcpy(temp -> data, givenName);
	return;
}

//--------------------------------------------------------------------------

void GetName (Node *tab[], long long int givenKey){

	long long int hash = Hash (givenKey);

	Node *temp = tab[hash];

	while (temp != NULL){

		if (temp -> key == givenKey){

			printf("%lld - %s\n", givenKey, temp -> data);
			return;
		}

		temp = temp -> next;
	}

	printf("%lld - invalid key\n", givenKey);

	return;
}

//--------------------------------------------------------------------------

void Remove (Node *tab[], long long int givenKey){

	long long int hash = Hash (givenKey);

	if (tab[hash] == NULL)
		return;

	if (tab[hash] -> key == givenKey){

		Node *temp = tab[hash] -> next;

		free(tab[hash]);

		tab[hash] = temp;

		return;
	}

	Node *temp = tab[hash];

	while (temp -> next != NULL){

		if (temp -> next -> key == givenKey){

			Node *cont = temp -> next;

			temp -> next = cont -> next;

			free(cont);

			return;
		}

		temp = temp -> next;
	}

	return;
}

//==========================================================================