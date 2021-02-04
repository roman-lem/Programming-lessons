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
	*(dst + j) = '\0';

	return dst;
}

int main() {

	char d[100];
    printf("_%s_\n", convert(d, " \t\r rabc  xz   \t\n "));
    // напечатает _rabcxz_
   return 0;
}

//==========================================================================