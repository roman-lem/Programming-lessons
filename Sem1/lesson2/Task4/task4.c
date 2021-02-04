#include <stdio.h>

//------------------------------------------------------------

float profit(float cost, float number, float pay);

//------------------------------------------------------------

int main(){

  float cost = 0;
  int number1 = 0, number2 = 0, number3 = 0;
  float pay1 = 0, pay2 = 0, pay3 = 0;

  printf("\n>>> Enter csot: ");
  scanf("%f", &cost);

  printf("\n>>> Enter numbers: ");
  scanf("%d %d %d", &number1, &number2, &number3);

  printf("\n>>> Enter payments: ");
  scanf("%f %f %f", &pay1, &pay2, &pay3);

  float summaryProfit = 0;
  summaryProfit = profit(cost, number1, pay1) + profit(cost, number2, pay2) + profit(cost, number3, pay3);

  printf("Magasins profit is: %1.2f rub\n", summaryProfit);

  return 0;
}

//----------------------------------------------------------------------

float profit(float cost, float number, float pay){

  float profit = 0;
  float change = 0;

  change = 100 * pay - 100 * cost * number;
  
  profit = (change - (int)change % 10)/100.0;

  return profit;
}
