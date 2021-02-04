#include <stdio.h>

//---------------------------

struct Time{

  int hour;
  int min;
};

int time2min(struct Time time);

//---------------------------

int main(){

  struct Time time = {0, 0};

  scanf("%d:%d", &time.hour, &time.min);

  printf("%d\n", time2min(time));

  return 0;
}

//---------------------------

int time2min(struct Time time){

  return time.hour * 60 + time.min;

}
