#include <stdio.h>

//------------------

int isInArr(int arr[], int i);

//------------------

int main(){

  int nums[10] = {0};

  int counter = 0, i = 0, num = 0;

  for(i = 0; i < 10; i++){

    scanf("%d", &num);
    if(! isInArr(nums, num)){

      nums[counter] = num;
      counter++;
    }
  }

  return 0;
}

//----------------

