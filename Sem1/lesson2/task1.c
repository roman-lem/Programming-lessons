#include <stdio.h>
#include <math.h>

int main(){
	
  printf("Char   %8ld %15u %23.0f \n", sizeof(char), 0, pow(2., 8*sizeof(char))-1);
  printf("Int    %8ld %15.0f %23.0f \n", sizeof(int), -pow(2., 8*sizeof(int)-1), pow(2., 8*sizeof(int)-1)-1);
  printf("U Int  %8ld %15u %23.0f \n", sizeof(unsigned int), 0, pow(2., 8*sizeof(unsigned int))-1);
  printf("Float  %8ld %15.2f %23e \n", sizeof(float), 31.415926,  31.415926);
  printf("L Int  %8ld %15u %23.0f \n", sizeof(long long int), 0, pow(2., 8*sizeof(long long int))-1);


  return 0;
}
