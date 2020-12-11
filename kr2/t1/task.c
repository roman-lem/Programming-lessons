#include <stdio.h>

//==========================================================================

char * convert (char * dst, const char * src){

	int i, j = 0;
	for (i = 0; *(src + i) != '\0'; i++) { 

		if(*(src + i) != ' ' && *(src + i) != '\n' && *(src + i) != '\t' && *(src + i) != '\r') {

			*(dst + j) = *(src + i);
			j++;
		}
	}

	return dst;
}

int main() {

	printf("Divari\n");

	return 0;
}

//==========================================================================