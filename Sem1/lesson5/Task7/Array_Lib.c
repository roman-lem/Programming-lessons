#include "Array_Lib.h"
#include <stdio.h>

//------------------------------

int enterArr(int arr[], int size){

	int i = 0;
	for(i = 0; i < size; i++){

		scanf("%d", &arr[i]);
	}

	return 0;
}

//-------------------------------

int printArr(int arr[], int size){

	int i = 0;
	for(i = 0; i < size; i++){

		printf("arr[%d] = %d\n", i, arr[i]);
	}

	return 0;
}
