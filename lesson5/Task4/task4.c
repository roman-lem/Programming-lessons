#include <stdio.h>

//-------------------------

int main(){

  int iter = 0;
  int mult = 0;

  for(iter = 0; iter < 10; iter++){

    printf("%d\n", 9 * mult + (iter + 1));
    mult = 10 * mult + (iter + 1);
  }

  return 0;
}

//-------------------------
