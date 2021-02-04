#include <stdio.h>

//-----------------------------------------------------

int sumOf2(int first, int second){

  return first + second;
}

//-----------------------------------------------------

int main(){

  int first, second;
  scanf("%d %d", &first, &second);

  printf("first = %d, second = %d\n", first, second);
  printf("Summ = %d\n", sumOf2(first, second));
  printf("first = %d, second = %d\n", first, second);

  return 0;
}
