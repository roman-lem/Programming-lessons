#include <stdio.h>
#include <math.h>
#include "coloredText.h"

//------------------------------------

int main(){

  double a = 0, b = 0, h = 0, z = 0, h1 = 0;

  $lb
  printf(">>> Enter [a, b] h z h1: ");
  scanf("[%lg, %lg] %lg %lg %lg", &a, &b, &h, &z, &h1);
  printf(" \n");
  $d

  $p
  {
  double x = 0, y = 0;
  
  printf("          x          y   sin(x + y)\n");
  for(x = a, y = z; x <= b; x = x + h, y = y + h1){

    printf("%10lg %10lg | %lg\n", x, y, sin(x + y));
  }
  }
  $d

  return 0;
}
