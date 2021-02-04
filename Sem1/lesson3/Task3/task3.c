#include <stdio.h>

double sumOf2(double first, double second);

double multOf2(double first, double second);

int main(){

  double first = 0,
	 second = 0;

  scanf("%lg %lg", &first, &second);

  printf("Summ = %lg\n", sumOf2(first, second));
  printf("Multiplication = %lg\n", multOf2(first, second));

  return 0;
}

double sumOf2(double first, double second){

  return first + second;
}

double multOf2(double first, double second){

  return first * second;
}

