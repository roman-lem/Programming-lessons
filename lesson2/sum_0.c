#include <stdio.h>

int main(){
  
  int number1 = 0, number2 = 0;

  scanf("%d %d", &number1, &number2);
  printf("%d %d %d %d\n", number1 + number2, number1 - number2, number1 / number2, number1 % number2);

  return 0;
}
