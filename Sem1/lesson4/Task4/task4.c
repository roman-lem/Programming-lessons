#include <stdio.h>

//---------------------------------------------

int identifyQuater(int x, int y);

//---------------------------------------------

int main(){

  int x = 0, y = 0;
  int quater = 0;

  printf("Enter x y: ");
  scanf("%d %d", &x, &y);

  quater = identifyQuater(x, y);

  printf("(%d, %d) is in %d quater\n", x, y, quater);

  return 0;
}

//-------------------------------------------

int identifyQuater(int x, int y){

  int quater;

  quater = 1;
  if (x < 0 && y > 0) quater = 2;
  else if (x < 0 && y < 0) quater = 3;
       else if (x > 0 && y < 0) quater = 4;
  
  return quater;
}

//-------------------------------------------
