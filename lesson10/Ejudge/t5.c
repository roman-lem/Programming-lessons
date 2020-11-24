#include <stdio.h>
#include <stdlib.h>

//----------------------

int cmp(const void *p1, const void *p2){

	return (int) (*((char*) p1) - *((char*) p2));
}

//-----------------------

int main(){

	char str[1000 + 1] = {0};

	fgets(str, 1001, stdin);

	int i;
	for(i = 0; str[i] != '.'; i++)
		;

	str[i + 1] = '\0';

	qsort(str, i, sizeof(char), cmp);

	printf("%s", str);

  return 0;
}
