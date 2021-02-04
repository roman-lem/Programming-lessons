#include <stdio.h>
#include <stdlib.h>

//----------------------------------

void ArrayInit(int **p, int n);

//----------------------------------

int main(){

	int *array = NULL;
	int n = 0;

	printf("n = ");
	scanf("%d", &n);

	ArrayInit(&array, n);

	int i;
	for(i = 0; i < n; i++){

		scanf("%d", array + i);
	}

	for(i = 0; i < n; i++){

		printf("&array[%d] = %p; array[%d] = %d\n", i, &array[i], i, array[i]);
	}

	free(array);

	return 0;
}

//---------------------------------

void ArrayInit(int **p, int n){

	*p = (int*) malloc(n * sizeof(int));

	return;
}
