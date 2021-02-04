#include <stdio.h>
#include <math.h>

//---------------------------------------------------------------

float length(int x1, int y1, int x2, int y2);

float s3(int x1, int y1, int x2, int y2, int x3, int y3);

//--------------------------------------------------------------

int main(){

  int x1 = 0, y1 = 0, x2 = 0, y2 = 0, x3 = 0, y3 = 0;

  scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);

  printf("%f", s3(x1, y1, x2, y2, x3, y3));

  return 0;

}

//-----------------------------------------------------------------

float length(int x1, int y1, int x2, int y2){

  return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

//-----------------------------------------------------------------

float s3(int x1, int y1, int x2, int y2, int x3, int y3){

  float area = 0, len12 = 0, len23 = 0, len31 = 0, p = 0;

  len12 = length(x1, y1, x2, y2);

  len23 = length(x2, y2, x3, y3);

  len31 = length(x3, y3, x1, y1);
  
  p = (len12 + len23 + len31) / 2.0;
  
  area = sqrt(p * (p - len12) * (p - len23) * (p - len31));

  return area;
}
