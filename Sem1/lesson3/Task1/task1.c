#include <stdio.h>

int main(){

  int first = 0,
      second = 0,
      third = 0;

  int *pointer1 = &first,
      *pointer2 = &second,
      *pointer3 = &third;

  scanf("%d %d %d", pointer1, pointer2, pointer3);

  printf("%d\n", *pointer1+*pointer2+*pointer3);

  return 0;
}
