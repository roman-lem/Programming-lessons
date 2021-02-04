#include <stdio.h>

//----------------------

int findMin(int arr[10], int begin, int end);

//----------------------

int main(){

	int arr[10] = {0};

	printf(">>> Enter array:\n");

	int i = 0;
	for(i = 0; i < 10; i++){

		scanf("%d", &arr[i]);
	}

	printf("min = %d\n", findMin(arr, 0, 9));

  return 0;
}

//----------------------

int findMin(int arr[10], int begin, int end){

	if(begin >= end)
		return arr[begin];

	if(findMin(arr, begin, (begin + end) / 2) < findMin(arr, (begin + end) / 2 + 1, end))
		return findMin(arr, begin, (begin + end) / 2);

	else
		return findMin(arr, (begin + end) / 2 + 1, end);
}

