#include <stdio.h>
#include "coloredText.h"

//--------------------------

int main(){

  char x = '*', y = '*';

  $y
  for(x = 'F'; x >= 'A'; x--){
    for(y = 'F'; y >= x; y--){

      printf("%c", y);
    }

    printf("\n");
  }
  $d

  return 0;
}
