#include <stdio.h>

//---------------------------

#define N 100

struct _Decimal {

    char a[N];       // number is a[0]*10^0 + a[1]*10^1 + ..+ a[n]*10^n

    unsigned int n;  // наибольшая степень десяти

};

typedef struct _Decimal Decimal;

//---------------------------

Decimal mult_int(Decimal num, unsigned int x);

void printDec(Decimal *num);

//---------------------------

int main(){

	Decimal number = {{0}, 0};
	Decimal res = {{0}, 0};
	unsigned int x = 0;

	FILE *fp = fopen("data.txt", "a+");

	int ch = getc(fp);
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

	ch = getc(fp);
	while(ch != EOF){
 
      if(ch >= '0' && ch <= '9'){
 
        x = x * 10 + (int)(ch - '0');
      }
 
      ch = getc(fp);
    }


	//printDec(&number);

	//return 0;

	res = mult_int(number, x);

	fprintf(fp, "{{%d", res.a[0]);
	for(int i = 1; i <= res.n; i++){

		fprintf(fp, ", %d", res.a[i]);
	}

	fprintf(fp, "}, %d}", res.n);

  return 0;
}

//--------------------------

Decimal mult_int(Decimal num, unsigned int x){

	Decimal res = {{0}, num.n};

	int flag = 0, i = 0;
	for(i = 0; i <= num.n; i++){

		res.a[i] = (num.a[i] * x) % 10 + flag;

		flag = (num.a[i] * x) / 10;
	}

	if(flag != 0){

		res.a[i] = flag;
		res.n++;
	}

	return res;
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
