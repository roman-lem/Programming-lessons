#include <stdio.h>
#include "coloredText.h"

//---------------------------------------

int main(){
 
  int counter = 0, min = 0, max = 0, sumPos = 0, sumNeg = 0, current = 0;

  $lb
  printf("Start printing numbers:\n");
  $d
  
  while(scanf("%d", &current) != 0){

    if(counter == 0){

      min  = current;
      max  = current;
    }

    if(current > 0)
      sumPos += current;
    if(current < 0)
      sumNeg += current;

    if(current < min)
      min = current;
    if(current > max)
      max = current;

    counter++;
  }

  $p
  printf("Number = %d,\nMinimal = %d,\nMaximal = %d,\nSum of positive = %d,\nSum of negative = %d\n", counter, min, max, sumPos, sumNeg);
  $d

  return 0;
}
