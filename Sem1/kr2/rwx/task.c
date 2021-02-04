#include <stdio.h>

//==========================================================================

int main () {

	int n = 0, v = 0;

	scanf("%d", &v);

	n = n * 10 + (v % 10);
	v = v / 10;
	n = n + (v % 10) * 8;
	v = v / 10;
	n = n + (v % 10) * 64;

	char a[9] = {};

	int i, flag = 0;
	for(i = 0; i < 9; i++) {

		flag = n % 2;

		if(flag == 1 && i % 3 == 0) {

			a[i] = 'x';
		}

		else if(flag == 1 && i % 3 == 1) {

			a[i] = 'w';
		}

		else if(flag == 1 && i % 3 == 2) {

			a[i] = 'r';
		}

		else {

			a[i] = '-';
		}

		n = n / 2;
	}

	for(i = 0; i < 9; i++) {

		printf("%c", a[9 - i - 1]);
	}

	printf("\n");

	return 0;
}