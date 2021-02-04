#include <stdio.h>
#include <string.h>

//----------------------------

int main(){

  char str[10+1] = {0},
			 ch = 0;

	printf(">>> Enter string: ");
	scanf("%s", str);

	printf(">>> Enter char: ");
	scanf("%s", &ch);

	char *p = strchr(str, ch);

	if(p == NULL){

		printf("Dont find\n");
		
		return 0;
	}

	printf("Sunbol %c is including in string\n", ch);

	*p = '*';

	printf("str = %s\n", str);

  return 0;
}
