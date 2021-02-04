#include <stdio.h>
#include <stdlib.h>

//---------------------

int main(int argc, char** argv){

	printf("argc = %d\n", argc);

	int i;
	for(i = 1; i < argc; i++){

		printf("argv[%d] = %d\n", i, atoi(argv[i]));
	}

	return 0;
}
