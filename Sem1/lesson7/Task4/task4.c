#include <stdio.h>
#include <string.h>

//------------------------

int main(){

  char str1[20+1] = {0},
	     str2[10+1] = {0};

	printf(">>> ");
	scanf("%s", str1);

	printf(">>> ");
	scanf("%s", str2);

	strcat(str1, str2);

	int length = strlen(str1);

	printf("str1 = \"%s\" \nlength = %d\n", str1, length);

  return 0;
}
