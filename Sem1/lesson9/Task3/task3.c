#include <stdio.h>

//-------------------------

int akker(int m, int n);

//-------------------------

int main(){

	int m = 0, n = 0;

	printf(">>> m = ");
	scanf("%d", &m);

	printf(">>> n = ");
	scanf("%d", &n);

	printf("akker(m, n) = %d\n", akker(m, n));

  return 0;
}

//------------------------

int akker(int m, int n){

	if(m == 0)
		return n + 1;

	else{  //if(m != 0)

		if(n == 0)
			return akker(m - 1, 1);

		else{
			
			return akker(m - 1, akker(m, n - 1));
		}
	}
}
