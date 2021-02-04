#include <stdio.h>
#include <stdlib.h>

//-------------------------

int compareInv(const void *x1, const void *x2);

int compareRev(const void *x1, const void *x2);

//-------------------------

int main(){

  int arr[10] = {0};

	printf(">>> Enter array:\n");

	int i = 0;
	for(i = 0; i < 10; i++){

		scanf("%d", &arr[i]);
	}

	qsort(arr, 10, sizeof(int), compareInv);

	for(i = 0; i < 10; i++){

		printf("%d ", arr[i]);
	}
	printf("\n");
  
	qsort(arr, 10, sizeof(int), compareRev);

	for(i = 0; i < 10; i++){

		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}

//-------------------------------

int compareInv(const void *x1, const void *x2){

	return *(int*)x1 - *(int*)x2;
}

//-------------------------------

int compareRev(const void *x1, const void *x2){

	return *(int*)x2 - *(int*)x1;
}
