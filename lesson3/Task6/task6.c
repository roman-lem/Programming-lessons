#include <stdio.h>
#include "complex.h"

//-------------------------------------------------------------------------

int main(){

  double firstRe, firstIm, secondRe, secondIm, ansRe, ansIm;
  char operation;

  printf("\n>>> Enter first number termvice: ");
  scanf("%lg %lg", &firstRe, &firstIm);

  printf("\n>>> Enter srcond number termvice: ");
  scanf("%lg %lg", &secondRe, &secondIm);
 
  printf("\n>>> Enter operation [+, -, *, /]: ");
  scanf("%c", &operation);
  scanf("%c", &operation);


  for(;;){
    if(operation == '+'){
      complexSum(firstRe, firstIm, secondRe, secondIm, &ansRe, &ansIm);
      printf("\n(%lg + (%lg)i) + (%lg + (%lg)i) = (%lg + (%lg)i)\n", firstRe, firstIm, secondRe, secondIm, ansRe, ansIm); 
      break;
    }
  
    else if(operation == '-'){
      complexDif(firstRe, firstIm, secondRe, secondIm, &ansRe, &ansIm);
      printf("\n(%lg + (%lg)i) - (%lg + (%lg)i) = (%lg + (%lg)i)\n", firstRe, firstIm, secondRe, secondIm, ansRe, ansIm); 
      break;
    }

    else if(operation == '*'){
      complexMult(firstRe, firstIm, secondRe, secondIm, &ansRe, &ansIm);
      printf("\n(%lg + (%lg)i) * (%lg + (%lg)i) = (%lg + (%lg)i)\n", firstRe, firstIm, secondRe, secondIm, ansRe, ansIm); 
      break;
    }

    else if(operation == '/'){
      complexDev(firstRe, firstIm, secondRe, secondIm, &ansRe, &ansIm);
      printf("\n(%lg + (%lg)i) / (%lg + (%lg)i) = (%lg + (%lg)i)\n", firstRe, firstIm, secondRe, secondIm, ansRe, ansIm); 
      break;
    }
  
    else{
      printf("\n>>> Enter operation [+, -, *, /]: ");
      scanf("%c", &operation);
      scanf("%c", &operation);
      break;
    }
  }
  return 0;
}
