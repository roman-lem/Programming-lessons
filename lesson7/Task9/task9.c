#include <stdio.h>

//---------------------------

int main(){

  char str[100];

	printf(">>> ");
	scanf("%s", str);

	int i = 0;
	for(i = 0; str[i] != '\0'; i++){

		if(str[i] - '0' == 0)
			continue;

		str[i] = (char) ('a' + str[i] - '1');
	}

	printf("str = %s\n", str);

  return 0;
}
