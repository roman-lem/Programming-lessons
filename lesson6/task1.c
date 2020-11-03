#include <stdio.h>
#include "matrix.h"

//-------------------

int isInArr(int arr[], int num);

//-------------------

int main(){

  int matrix[5][5];
  int x = 0, y = 0;
  for(y = 0; y < 5; y++){
    for(x = 0; x < 5; x++){
      matrix[y][x] = 0;
    }
  }

  matrixScan(matrix);
  //printf("<<<Matrix was scaned!>>>\n");
  //printf("<<<matrix[0][0] = %d, matrix[4][4] = %d\n", matrix[0][0], matrix[4][4]);

 int minX[5] = {0}, maxY[5] = {0};

  for(y = 0; y < 5; y++){
    for(x = 1; x < 5; x++){

      if(matrix[y][x] < matrix[y][minX[y]]){
        minX[y] = x;
	//printf("<<<I find min, y = %d>>>\n", y);
      }
    }
  }

  for(x = 0; x < 5; x++){
    for(y = 1; y < 5; y++){

      if(matrix[y][x] > matrix[maxY[x]][x]){
        maxY[x] = y;
	//printf("<<<I find max>>>\n");
      }
    }
  }

/*int i = 0;
  for(i = 0; i < 5; i++){

    printf("%d\n", maxY[i]);
  }*/

  for(y = 0; y < 5; y++){
    for(x = 0; x < 5; x++){

      if(isInArr(minX, x) && isInArr(maxY, y)){

        printf("matrix[%d][%d] = %d is saddle point\n", y, x, matrix[y][x]);
      }
    }
  }

  return 0;
}

//-----------------------------

int isInArr(int arr[], int num){

  int i = 0;
  for(i = 0; i < 5; i++){

    if(num == arr[i]) 
      return 1;	    
  }

  return 0;
}
