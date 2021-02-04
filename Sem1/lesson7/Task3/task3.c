#include <stdio.h>
#include <string.h>

//--------------------------

int main(){

  char str1[10+1] = {0};
	char str2[10+1] = {0};

	printf(">>> ");
	scanf("%s", str1);

  printf(">>> ");
	scanf("%s", str2);

	strncpy(str1 + 4, str2 + 1, 3);

	printf("str1 = \"%s\"\n", str1);

  return 0;
}
