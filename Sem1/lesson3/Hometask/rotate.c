#include <stdio.h>

//----------------------------------------------

void rotate(int *x1, int *y1, int *x2, int *y2);

//----------------------------------------------

int main(){

  int x1 = 0, y1 = 0, x2 = 0, y2 = 0;
  scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

  rotate(&x1, &y1, &x2, &y2);

  printf("%d %d %d %d\n", x1, y1, x2, y2);

  return 0;
}

//------------------------------------------------

void rotate(int *x1, int *y1, int *x2, int *y2){

  int x1_new = 0, y1_new = 0, x2_new = 0, y2_new = 0;
  float x_c = 0, y_c = 0;
  x_c = (*x1 + *x2) / 2;
  y_c = (*y1 + *y2) / 2;

  x1_new = x_c + (y_c - *y1);
  y1_new = y_c - (*x1 - x_c);
  x2_new = x_c - (y_c - *y1);
  y2_new = y_c + (*x1 - x_c);

  *x1 = x1_new;
  *y1 = y1_new;
  *x2 = x2_new;
  *y2 = y2_new;

  return;
}

//------------------------------------------------
