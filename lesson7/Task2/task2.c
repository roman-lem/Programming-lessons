#include <stdio.h>
#include <string.h>

//------------------------

int main(){

  char str1[10+1] = {0};
	char str2[10+1] = {0};

	printf(">>> ");
	scanf("%s", str1);

	printf(">>> ");
	scanf("%s", str2);

	(strncmp(str1, str2, 3) == 0)? printf("YES\n") : printf("NO\n");

  return 0;
}
