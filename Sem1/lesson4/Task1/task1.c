#include <stdio.h>

int Test = 3;

//----------------------------------------

int main(){

  {
    int Test = 7;

    printf("In inside block: %d\n", Test);
  }

  printf("In main: %d\n", Test);

  return 0;
}
