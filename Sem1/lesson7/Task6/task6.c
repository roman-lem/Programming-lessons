#include <stdio.h>
#include <string.h>

//----------------------

int main(){

  char str1[10+1] = {0},
	     str2[10+1] = {0};

	printf(">>> ");
	scanf("%s", str1);

	printf(">>> ");
	scanf("%s", str2);

	char *p = strstr(str1, str2);

	if(p == NULL){

    printf("Dont find\n");
		return 0;
	}

	char helpStr[10+1] = {0};

	char *i = str1;
	for(i = str1; i < p; i++){

		helpStr[i - str1] = *i;
	}

	strcat(helpStr, p + strlen(str2));

	printf("str = %s\n", helpStr);

  return 0;
}
