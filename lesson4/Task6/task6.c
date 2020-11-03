#include <stdio.h>
#include "coloredText.h"

//-------------------------------------------------------

double isPositive(double x);

//-------------------------------------------------------

int main(){

  double num = 0;
  double testedNum = 0;
  $p
  printf(">>> Enter x: ");
  $d
  scanf("%lg", &num);
  printf(" \n");

  testedNum = isPositive(num);

  $lb
  (testedNum > 0) ? printf("x is positive, 5x = %lg\n", testedNum) : printf("x isn't positive, 6x = %lg\n", testedNum);
  $d

  return 0;
}

//-----------------------------------------------------

double isPositive(double x){

  return (x > 0) ? 5 * x : 6 * x;
}

