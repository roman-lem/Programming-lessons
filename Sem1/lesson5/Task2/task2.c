#include <stdio.h>
#include "coloredText.h"

//------------------------

double sinx(double arg, double prec);

double abs(double arg);

//------------------------

int main(){

  double arg = 0, prec = 0;

  $lb
  printf(">>> Enter argument and precession: ");
  scanf("%lg %lg", &arg, &prec);

  printf(" \n");
  $d

  $p
  printf("sin(x) = %lg\n", sinx(arg, prec));
  $d

  return 0;
}

//-----------------------------

double sinx(double arg, double prec){

  double ans = 0, el = 0;
  int i = 2;

  el = arg;

  while(abs(el) > prec){

    $g
    printf("Current sin(x) = %lg\n", ans);
    $d
	
    ans += el;

    el = - (el * arg * arg) / (i * (i + 1));

    i += 2;
  }

  return ans;
}

//-----------------------------

double abs(double arg){

  return (arg >= 0) ? arg : -arg;
}
