#include <stdio.h>

//---------------------------------

int isCapital(char ch);

//---------------------------------

int main(){

	char str[100] = "awdwddd eefrfrfs. ssrfrggrs. serggr sef. e";

	//printf(">>> ");
	//scanf("%s", str);

	if(isCapital(str[0]) == 0){

		str[0] = 'A' + str[0] - 'a';
	}

	int i = 0;
	for(i = 2; str[i] != '\0'; i++){

		if(str[i - 2] == '.' && isCapital(str[i]) == 0){

			str[i] = 'A' + str[i] - 'a';
		}
	}

	printf("str = %s\n", str);

  return 0;
}

//---------------------------------

int isCapital(char ch){

	if(ch >= 'A' && ch <= 'Z'){

		return 1;
	}

	if(ch >= 'a' && ch <= 'z'){

		return 0;
	}

  return -1;
}
