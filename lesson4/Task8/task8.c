#include <stdio.h>
#include "coloredText.h"

//----------------------------------

struct circle{

  double x;

  double y;

  double r;
};

int isPointInCirc(struct circle *circ, int x, int y);

//----------------------------------

int main(){

  struct circle circ_1 = {0, 0, 2};
  struct circle circ_2 = {0, 0, 0};
  double x = 0, y = 0;

  $lb
  printf(">>> Enter paramerers of 2'nd circle: ");
  scanf("%lg %lg %lg", &circ_2.x, &circ_2.y, &circ_2.r);

  printf(" \n");
  
  printf(">>> Enter coordinats of point: ");
  scanf("%lg %lg", &x, &y);

  printf(" \n");
  $d

  $p
  if(isPointInCirc(&circ_1, x, y) == 1 && isPointInCirc(&circ_2, x, y) == 1){

    printf("Point is in intersection of circles\n");
  }	  
  else if(isPointInCirc(&circ_1, x, y) == 1){
         
         printf("Point is in diffinition of 1'st and 2'nd circle\n");	  
       }
       else if(isPointInCirc(&circ_2, x, y) == 1){

              printf("Point is in diffinition of 2'nd and 1'st circle\n");
            }
            else{

              printf("Point is outside of circles\n");
	    }
  $d

  return 0;
}

//---------------------------------------------

int isPointInCirc(struct circle *circ, int x, int y){

  if( (circ->x - x) * (circ->x -x) + (circ->y - y) * (circ->y - y) < circ->r * circ->r){

    return 1;
  }
  else{

    return 0;
  }
}
