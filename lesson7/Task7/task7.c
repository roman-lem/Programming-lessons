#include <stdio.h>
#include <string.h>

//------------------------

int main(){

  char str1[10+1] = {0},
	     str2[10+1] = {0};

	printf(">>> ");
	scanf("%s", str1);

	printf(">>> ");
	scanf("%s", str2);

	char *p = strpbrk(str1, str2);

	*p = '*';

	printf("str = %s\n", str1);

  return 0;
}
