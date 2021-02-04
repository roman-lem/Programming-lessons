#include <stdio.h>

//---------------------------------

void selfCounter();

//---------------------------------

int main(){

  for(int i = 0; i < 5; i++){

    selfCounter();
  }

  return 0;
}

//-------------------------------------------------

void selfCounter(){

  static int a = 0;

  printf("I called %d times\n", ++a);

  return;
}

