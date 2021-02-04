#include <stdio.h>
#include <string.h>

//----------------------------

int main(){

	char str[100];

	printf(">>> ");
	scanf("%s", str);

	char* tempPoint;
	while(1){

		tempPoint = strchr(str + 1, str[0]);

		if(tempPoint == NULL)
			break;

		*tempPoint = '\0';

		strcat(str, tempPoint + 1);
	}

	printf("str = %s\n", str);

  return 0;
}
