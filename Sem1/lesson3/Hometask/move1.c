#include <stdio.h>

//-------------------------------------------

void move(int *x1, int *y2, int dx, int dy);

//-------------------------------------------

int main(){

  int x1 = 0, y1 = 0;
  scanf("%d %d", &x1, &y1);

  int dx = 0, dy = 0;
  scanf("%d %d", &dx, &dy);

  move(&x1, &y1, dx, dy);

  printf("%d %d\n", x1, y1);

  return 0;
}

//--------------------------------------------

void move(int *x1, int *y1, int dx, int dy){

  *x1 = *x1 + dx;
  *y1 = *y1 + dy;

  return;
}

//--------------------------------------------
