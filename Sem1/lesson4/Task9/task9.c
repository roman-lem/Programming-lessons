#include <stdio.h>
#include "coloredText.h"

//------------------------------------

struct point{

  int x;
  int y;
};

struct rect{

  struct point lt;
  struct point rb;
};

//------------------------------------

void mirror(struct rect *rect, char axis);

//------------------------------------

int main(){

  struct rect rect = {{0, 0}, {0, 0}};
  char axis = 'x';

  $lb
  printf(">>> Enter left top point: ");
  scanf("%d %d", &rect.lt.x, &rect.lt.y);

  printf("\n>>> Enter right bottom point: ");
  scanf("%d %d", &rect.rb.x, &rect.rb.y);

  printf("\n>>> Enter axis [x/y]: ");
  scanf(" %c", &axis);

  printf(" \n");
  $d

  mirror(&rect, axis);

  $p
  printf("First point is (%d, %d) \nSecod point is (%d, %d) \n", rect.lt.x, rect.lt.y, rect.rb.x, rect.rb.y);
  $d

  return 0;
}

//---------------------------------------------------------------

void mirror(struct rect *rect, char axis){\

  if(axis == 'x'){

    rect->lt.y = -rect->lt.y;
    rect->rb.y = -rect->rb.y;
  }
 
  if(axis == 'y'){

    rect->lt.x = -rect->lt.x;
    rect->rb.x = -rect->rb.x;
  }

  return;
}
