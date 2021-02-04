#include <stdio.h>

int main(){

  int numOfLessons = 0, hours = 8, minutes = 0;

  scanf("%d", &numOfLessons);

  minutes = 50 * numOfLessons - 5;
  hours = (hours + minutes / 60) % 24;
  minutes = minutes % 60;

  printf("%02d:%02d\n", hours, minutes); 

  return 0;
}
