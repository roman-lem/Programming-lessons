#include <stdio.h>

//--------------------------

long long int fact(int n);

//--------------------------

int main(){

	int n = 0;

	printf(">>> n = ");
	scanf("%d", &n);

	printf(">>> n! = %lld\n", fact(n));

  return 0;
}

//--------------------------

long long int fact(int n){

	if(n == 1)
		return 1;

	else
		return n * fact(n - 1);
}
