#include <stdio.h>
#include <string.h>

//---------------------------

int delSymb(char* str, int index);

//---------------------------

int main(){

	char str[100] = {0};

	printf(">>> ");
	scanf("%s", str);

	int i = 0;
	for(i = 1; str[i] != '\0'; i++){
		
		if(str[i] == str[i - 1]){

			delSymb(str, i);

			i--;
		}
	}

	printf("str = %s\n", str);

  return 0;
}

//---------------------------

int delSymb(char* str, int index){

	str[index] = '\0';

	strcat(str, str + index + 1);

  return 0;
}
