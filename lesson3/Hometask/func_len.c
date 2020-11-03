#include <stdio.h>
#include <math.h>

//--------------------------------------------------------------------

float length(int firstPoint_x, int firstPoint_y, int secondPoint_x, int secondPoint_y);

//--------------------------------------------------------------------

int main(){

  int firstPoint_x = 0, firstPoint_y = 0, secondPoint_x = 0, secondPoint_y = 0;

  scanf("%d %d %d %d", &firstPoint_x, &firstPoint_y, &secondPoint_x, &secondPoint_y);

  printf("%f", length(firstPoint_x, firstPoint_y, secondPoint_x, secondPoint_y));

  return 0;
}

//--------------------------------------------------------------------

float length(int firstPoint_x, int firstPoint_y, int secondPoint_x, int secondPoint_y){

  return sqrt((firstPoint_x - secondPoint_x) * (firstPoint_x - secondPoint_x) + (firstPoint_y - secondPoint_y) * (firstPoint_y - secondPoint_y));

}

