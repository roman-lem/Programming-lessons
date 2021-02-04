#include <stdio.h>

//-----------------------------------------------

int time2min(int hours, int min);

//-----------------------------------------------

int main(){

  int hours, min, mm;

  scanf("%d:%d", &hours, &min);

  mm = time2min(hours, min);

  printf("%d\n", mm);

  return 0;
}

//----------------------------------------------

int time2min(int hours, int min){

  int mm = 0;

  mm = hours * 60 + min;

  return mm;
}

//----------------------------------------------
