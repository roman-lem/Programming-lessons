#include <stdio.h>

//---------------------

int main(){

  short int pNums[10000] = {0};

  pNums[0] = 1;
	pNums[1] = 1;

	int i, j;
	for(i = 2; i <= 100; i++){
    
		if(pNums[i] == 0){
			
			for(j = 2*i; j < 10000; j += i){

				pNums[j] = 1;
			}
		}

		else continue;
	}

	for(i = 0; i < 10000; i++){

		if(pNums[i] == 0)
			printf("%d\n", i);
	}

  return 0;
}
