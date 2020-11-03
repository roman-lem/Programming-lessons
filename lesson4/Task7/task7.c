#include <stdio.h>
#include "coloredText.h"

//-----------------------------------

struct mass{
  double value;
  int unit;
};

void printMassInKg(struct mass);

//-----------------------------------

int main(){

  struct mass mass = {0.0, 0};
  
  $p
  printf(">>> Enter mass in format: value, unit: ");
  $d
  scanf("%lg, %d", &mass.value, &mass.unit);
  printf(" \n");

  printMassInKg(mass);

  return 0;
}

//------------------------------------

void printMassInKg(struct mass mass){

  switch(mass.unit){

    case 1:
      $lb	    
      printf("Mass = %lg kg\n", mass.value);
      $d
      break;

    case 2:
      $lb	    
      printf("Mass = %lg kg\n", mass.value / 1000000.0);
      $d
      break;

    case 3:
      $lb	    
      printf("Mass = %lg kg\n", mass.value / 1000.0);
      $d
      break;

    case 4:
      $lb	    
      printf("Mass = %lg kg\n", mass.value * 1000.0);
      $d
      break;
  
    case 5:
      $lb	    
      printf("Mass = %lg kg\n", mass.value * 100.0);
      $d
      break;
  }

  return;
}
