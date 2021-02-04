#include <stdio.h>
#include <stdlib.h>

//==========================================================================

struct _Decimal {

    char* a;       // number is a[0]*10^0 + a[1]*10^1 + ..+ a[n]*10^n

    unsigned int n;  // наибольшая степень десяти
};

typedef struct _Decimal Decimal;

//--------------------------------------------------------------------------


void printDec(Decimal *num){

  fprintf(stdout, "{{%d", (num->a[0] - '0'));
	for(int i = 1; i <= num->n; i++){

		fprintf(stdout, ", %d", num->a[i] - '0');
	}

	fprintf(stdout, "}, %d}\n", num->n);

	return;
}

Decimal * mult10 (const Decimal * num) {

	printDec(num);

	Decimal *res;

	res->a = (char*) calloc(1, sizeof(char));

	printf("%p\n", res->a);

	printDec(num);

	if(num->n != 0) {

		printDec(num);

		printf("^^\n");

		res->a = (char*) realloc(res->a, (num->n + 1) * sizeof(char));

		printf("^^\n");
		res->n = num->n + 1;
		printf("!\n");
		res->a[0] = '0';

		int i;
		for (i = 1; i < res->n; i++) {
			printDec(num);
			printf("<<%c\n", num->a[i - 1]);
			*(res->a + i) = *(num->a + i - 1);
		}

	}
	else {

		res->a = (char*) realloc(res->a, sizeof(char));
		res->a[0] = '0';
		res->n = 0;
	}
	

	return res;
}


int main () {

	 Decimal * a;  
    Decimal * res;

    a->a = (char*) calloc(3, sizeof(char));
    printf("$\n");
    a->a[0] = '7';
    a->a[1] = '4';
    a->a[2] = '2';

    a->n = 2;

    printDec(a); 

    printf("$\n");
    
    res = mult10(a);          // res = a*10 = 147*10 = 1470
    
    printDec(res);                  // print 1470
    printf("\n");
    
    free(a->a);
    free(res->a);

	return 0;
}