#include <stdio.h>
#include "Array_Lib.h"
#include "coloredText.h"

//-------------------------------

void changeMinMax(int arr[], int size);

//-------------------------------

int main(){

  int nums[10] = {};

  $lb
  printf(">>> Enter the elements of array:\n");
  enterArr(nums, 10);
  $d

  changeMinMax(nums, 10);

  $p
  printf("Array after change:\n");
  printArr(nums, 10);
  $d

  return 0;
}

//-------------------------------

void changeMinMax(int arr[], int size){

  int posOfMin = 0, posOfMax = 0;

  int changer = 0;

  int i = 0;
  for(i = 0; i < size; i++){

    if(arr[i] < arr[posOfMin])
      posOfMin = i;

    if(arr[i] > arr[posOfMax])
      posOfMax = i;
  }

  changer = arr[posOfMin];

  arr[posOfMin] = arr[posOfMax];

  arr[posOfMax] = changer;

  return;
}

//-------------------------------
