#include <stdio.h>

int main(){

  int a[5] = {5, 4, 3, 2, 1}, *p;

  printf("pointers: \n    a = %p \n   &a = %p \n&a[0] = %p\n", a, &a, &a[0]);

  return 0;
}
