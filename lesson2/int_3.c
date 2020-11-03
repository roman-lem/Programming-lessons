#include <stdio.h>
#include <math.h>

int main(){

  float area = 0, 
        width = 0, 
        length = 0, 
        chareLength = 0; 
  int   res = 0;

  scanf("%f %f %f", &area, &width, &chareLength);

  length = area / width;
  res = floor(length / chareLength);

  printf("%d\n", res);  

  return 0;
}
