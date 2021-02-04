#include <stdio.h>

//---------------------------

#define N 100

struct _Decimal {

    char a[N];       // aber is a[0]*10^0 + a[1]*10^1 + ..+ a[n]*10^n

    unsigned int n;  // наибольшая степень десяти

};

typedef struct _Decimal Decimal;

//---------------------------

Decimal mult_int(Decimal a, unsigned int x);

void printDec(Decimal *a);

//---------------------------

int main(){

	Decimal aber = {{0}, 0};
	Decimal res = {{0}, 0};
	unsigned int x = 0;

	FILE *fp = fopen("data.txt", "a+");

	int ch = getc(fp);
	int i = 0;
	while(ch != '}'){

		//printf("char = <%c>\n", ch);

		if(ch >= '0' && ch <= '9'){

			aber.a[i++] = (int)(ch - '0');
		}

		ch = getc(fp);
	}

	ch = getc(fp);
  while(ch != '}'){

		//printf("char = <%c>\n", ch);
		
		if(ch >= '0' && ch <= '9'){

			aber.n = aber.n * 10 + (int)(ch - '0');

			//printf("aber.n = %d\n", aber.n);
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


	//printDec(&aber);

	//return 0;

	res = mult_int(aber, x);

	fprintf(fp, "{{%d", res.a[0]);
	for(int i = 1; i <= res.n; i++){

		fprintf(fp, ", %d", res.a[i]);
	}

	fprintf(fp, "}, %d}", res.n);

  return 0;
}

//--------------------------

Decimal mult_int(Decimal *a){

	int x = 10;

	Decimal res = {{0}, a->n};

	int flag = 0, i = 0;
	for(i = 0; i <= a->n; i++){

		res.a[i] = (a->a[i] * x) % 10 + flag;

		flag = (a->a[i] * x) / 10;
	}

	if(flag != 0){

		res.a[i] = flag;
		res.n++;
	}

	Decimal *res2 = (Decimal*) calloc(1, 12);

	res2->n = res.n;

	res2->a = (char*) calooc(res.n + 1, sizeof(char));

	for(i = 0; i < res.n + 1; i++){

		res2->a[i] = res.a[i];
	}

	return res2;
}

//-------------------------

void printDec(Decimal *a){

  fprintf(stdout, "{{%d", a->a[0]);
	for(int i = 1; i <= a->n; i++){

		fprintf(stdout, ", %d", a->a[i]);
	}

	fprintf(stdout, "}, %d}\n", a->n);

	return;
}
