#include <stdio.h>
#include "matrix.h"

void matrixScan(int (*matrix)[5]){

  int x = 0, y = 0;
  for(y = 0; y < 5; y++){
    for(x = 0; x < 5; x++){

      scanf("%d", &matrix[y][x]);
    }
  }

  return;
}
