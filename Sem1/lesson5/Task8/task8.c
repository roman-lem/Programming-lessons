#include <stdio.h>
#include "cText.h"

//------------------------

int main(){

  $lb
	printf("This programm find the maximal ariphmetic prog. in 10-el array\n\n");
	$d

  int arr[10] = {0};
	int startIndex = 0, maxLen = 0, counter = 0;

	$g
  printf(">>> ");
	$d

  int i;
	for(int i = 0; i < 10; i++){

		scanf("%d", &arr[i]);
	}

  for(i = 2; i < 10; i++){

	  if(arr[i] - arr[i-1] == arr[i-1] - arr[i-2]){
    
			counter++;   
		}

		else if(maxLen >= counter){
			
			counter = 0;
		}

		if(maxLen < counter){

			maxLen = counter;
			
			startIndex = i - maxLen - 1;
		}
  }

	$lb
  printf("Maximal progression: ");
	for(i = 0; i < maxLen + 2; i++){

    printf("%d ", arr[startIndex + i]);
	}
	printf("\n");
	$d

  return 0;
}
