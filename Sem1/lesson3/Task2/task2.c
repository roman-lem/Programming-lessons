#include <stdio.h>

void printStars();

int main(){

  printStars();

  return 0;
}

void printStars(){

  for(int i = 0; i < 20; i++){
    printf("*");
  }

  printf("\n");

  return;
}
