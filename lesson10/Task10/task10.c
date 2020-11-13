#include <stdio.h>

//---------------------------

#define N 100

struct _Decimal {

    char a[N];       // number is a[0]*10^0 + a[1]*10^1 + ..+ a[n]*10^n

    unsigned int n;  // наибольшая степень десяти

};

typedef struct _Decimal Decimal;

//---------------------------

void half(Decimal *res, Decimal *num);

void printDec(Decimal *num);

//---------------------------

int main(){

	Decimal number = {{0}, 0};

	FILE *fp = fopen("data.txt", "a+");

	char ch = getc(fp);
	int i = 0;
	while(ch != '}'){

		//printf("char = <%c>\n", ch);

		if(ch >= '0' && ch <= '9'){

			number.a[i++] = (int)(ch - '0');
		}

		ch = getc(fp);
	}

	ch = getc(fp);
  while(ch != '}'){

		//printf("char = <%c>\n", ch);
		
		if(ch >= '0' && ch <= '9'){

			number.n = number.n * 10 + (int)(ch - '0');

			//printf("number.n = %d\n", number.n);
		}

		ch = getc(fp);
	}

	//printDec(&number);

	//return 0;

	Decimal res = {{0}, 0};

	half(&res, &number);

	fprintf(fp, "{{%d", res.a[0]);
	for(int i = 1; i <= res.n; i++){

		fprintf(fp, ", %d", res.a[i]);
	}

	fprintf(fp, "}, %d}", res.n);

  return 0;
}

//--------------------------

void half(Decimal *res, Decimal *num){

	res->n = num->n;

	int flag = 0, i = 0;
	for(i = num->n; i >= 0; i--){

		res->a[i] = num->a[i] / 2;

		flag = num->a[i] % 2;
	}

	return;
}

//-------------------------

void printDec(Decimal *num){

  fprintf(stdout, "{{%d", num->a[0]);
	for(int i = 1; i <= num->n; i++){

		fprintf(stdout, ", %d", num->a[i]);
	}

	fprintf(stdout, "}, %d}\n", num->n);

	return;
}
