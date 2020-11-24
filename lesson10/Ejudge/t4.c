#include <stdio.h>
#include <stdlib.h>

//-------------------------------

int cmp(const void *p1, const void *p2){

	if(*((double*) p1) > *((double*) p2))
		return 1;
	
	else if(*((double*) p1) == *((double*) p2))
		return 0;

	else
		return -1;
}

//-------------------------------

int main(){

	int N = 0;
	double arr[1000] = {0};

	scanf("%d", &N);

	int i = 0;
	for(i = 0; i < N; i++){
		scanf("%lg", &arr[i]);
	}

	qsort(arr, N, sizeof(double), cmp);

	for(i = 0; i < N; i++){
		printf("%.2f ", arr[i]);
	}

	return 0;
}
