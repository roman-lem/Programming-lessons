#include <stdio.h>

//--------------------------------------------------

void sumDifAndChange(int *first, int *second);

//--------------------------------------------------

int main(){
  
  int first = 0,
      second = 0;

  scanf("%d %d", &first, &second);

  sumDifAndChange(&first, &second);

  printf("%d %d\n", first, second);
  
  return 0;
}

//------------------------------------------

void sumDifAndChange(int *first, int *second){

  int sum = 0,
      dif = 0;

  sum = *first + *second;
  dif = *first - *second;

  *first = sum;
  *second = dif;

  return;
}

//------------------------------------------
