#include <stdio.h>

int main(){

  char ch = '*';

  printf(">>> Enter char: ");
  scanf("%c", &ch);

  if ('A' <= ch && ch <= 'z') printf("%c is letter\n", ch);
  else if ('0' <= ch && ch <= '9') printf("%c is number\n", ch);
       else printf("%c is symbol\n", ch);

  return 0;
}
