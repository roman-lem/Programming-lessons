#include <stdio.h>

//-----------------------------------------------

void one_tr(float *x1, float *x2);

//-----------------------------------------------

int main(){

  float x1 = 0, x2 = 0;

  scanf("%f %f", &x1, &x2);

  one_tr(&x1, &x2);

  printf("%f %f\n", x1, x2);

  return 0;
}

//-----------------------------------------------

void one_tr(float *x1, float *x2){

  float delta = *x2 - *x1;

  *x1 = *x1 + delta/3;
  *x2 = *x2 - delta/3;

  return;
}

//-----------------------------------------------
