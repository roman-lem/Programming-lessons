#include <stdio.h>
#include "cplx.h"
//#include "cplx.c"
#include "coloredText.h"

//----------------------------

void printCplx(struct cplx *cplx);

//----------------------------

int main(){

  struct cplx  first = {0, 0};
  struct cplx second = {0, 0};
  struct cplx    ans = {0, 0};
  char operation = '+';

  $lb
  printf(">>> Enter first complex number: ");
  scanf("%lg + %lgi", &first.re, &first.im);

  printf(">>> Enter second complex number: ");
  scanf("%lg + %lgi", &second.re, &second.im);

  printf(">>> Enter operation [\x1b[31m + \x1b[36m/\x1b[31m - \x1b[36m/\x1b[31m * \x1b[36m/\x1b[31m / \x1b[36m]: ");
  scanf(" %c", &operation);
  $d

  if(operation == '+')
    ans = cplxSum(first, second);

  if(operation == '-')
    ans = cplxDiff(first, second);

  if(operation == '*')
    ans = cplxMult(first, second);

  if(operation == '/')
    ans = cplxDev(first, second);

  $p
  printCplx(&ans);
  $d

  return 0;
}

//----------------------------

void printCplx(struct cplx *cplx){

  printf("%lg + (%lg)i\n", cplx->re, cplx->im);

  return;
}
