#include <stdio.h>

int a = 1;

extern int b;

int main(){

  printf("Inside binding: %d\n", a);

  printf("Outside binding: %d\n", b);

  //printf("Error binding: %d\n", c);

  return 0;
}
