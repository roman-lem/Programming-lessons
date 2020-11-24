#include <stdio.h>
#include <stdlib.h>

//--------------------------------

int main(int argc, char** argv){

	int sum = 0;
	char** end;

	int i;
	for(i = 1; i < argc; i++){

		sum += strtol(*(argv + i), end, 10);
	}

  return sum;
}
