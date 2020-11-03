#include <stdio.h>

//--------------------------------------

void min2time(int mm, int *hours, int *min);

//--------------------------------------

int main(){

  int hours = 0, minutes = 0, mm = 0;

  scanf("%d", &mm);

  min2time(mm, &hours, &minutes);

  printf("%02d:%02d\n", hours, minutes);

  return 0;
}

//--------------------------------------

void min2time(int mm, int *hours, int *min){

  *hours = mm / 60;
  *min = mm % 60;

  return;
}

//--------------------------------------
