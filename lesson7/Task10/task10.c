#include <stdio.h>

//-------------------------

int main(){

	char str[100] = "To be or not to be, that is a question";

	int i = 0;
	for(i = 0; str[i] != '\0'; i++){

		if(str[i] == ' '){

			str[i] = '\n';
		}
	}

	printf("str = %s\n", str);

  return 0;
}
