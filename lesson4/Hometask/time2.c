#include <stdio.h>

//--------------------------

struct Time{

  int hour;
  int min;
};

void printTime(struct Time time);

//--------------------------

int main(){

  struct Time time = {0, 0};

  scanf("%d %d", &time.hour, &time.min);

  printTime(time);

  return 0;
}

//--------------------------

void printTime(struct Time time){

  printf("%02d:%02d\n", time.hour, time.min);

  return;
}
