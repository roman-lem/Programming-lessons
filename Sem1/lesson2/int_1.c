#include <stdio.h>

int main(){
  
  int orange = 0, children = 0;
  
  scanf("%d %d", &orange, &children);
  printf("%d\n%d\n", orange / children, orange % children); 
  
  return 0;
}
