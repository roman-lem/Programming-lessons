#include <stdio.h>
#include "coloredText.h"

//----------------------------------

double deemSqEq(double arg);

double solve(double begin, double end);

//----------------------------------

int main(){

  double begin = 0, end = 0;
  double root = 0;

  $lb
  printf(">>> Enter cut [a, b]: ");
  scanf("[%lg, %lg]", &begin, &end);

  printf(" \n");
  $d

  $p
    printf("Root of 5x^2 + 3x - 4 = 0: x = %lg\n", solve(begin, end));
  $d

  return 0;
}

//---------------------------------------

double deemSqEq(double arg){

  return 5 * arg * arg + 3 * arg - 4;
}

//--------------------------------------

double solve(double begin, double end){

  while(! (deemSqEq(begin) > -0.000001 && deemSqEq(begin) < 0.000001)){

    double avg = (begin + end) / 2;

    if(deemSqEq(begin) * deemSqEq(avg) < 0.0){

      end = avg;
    }  
    else{

      begin = avg;
    }
  }

  return begin;
}
