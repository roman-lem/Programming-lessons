#include <stdio.h>

//==========================================================================

int main() {

	int data [100][3];

	int i, j;
	for (i = 0; i < 100; i++) {

		for (j = 0; j < 3; j++) {

			data[i][j] = 0;
		}
	}

	int n;
	scanf("%d", &n);

	for(i = 0; i < n; i++) {

		scanf("%d", &data[i][1]);

		scanf("%d", &data[i][2]);

		scanf("%d", &data[i][3]);
	}

	for (i = 0; i < 100 - 2; i++) {

		for (j = 0; j < 100 - i - 2; j++) {

			if(data[j][3] > data[j+1][3]) {

				int temp = data[j][3];
				data[j][3] = data[j+1][3];
				data[j+1][3] = temp;

				temp = data[j][2];
				data[j][2] = data[j+1][2];
				data[j+1][2] = temp;

				temp = data[j][1];
				data[j][1] = data[j+1][1];
				data[j+1][1] = temp;
			}
		}
	}

	for (i = 0; i < 100 - 2; i++) {

		for (j = 0; j < 100 - i - 2; j++) {

			if(data[j][1] > data[j+1][1] && data[j][3] == data[j+1][3]) {

				int temp = data[j][3];
				data[j][3] = data[j+1][3];
				data[j+1][3] = temp;

				temp = data[j][2];
				data[j][2] = data[j+1][2];
				data[j+1][2] = temp;

				temp = data[j][1];
				data[j][1] = data[j+1][1];
				data[j+1][1] = temp;
			}
		}
	}

	for (i = 0; i < 100 - 2; i++) {

		for (j = 0; j < 100 - i - 2; j++) {

			if(data[j][2] > data[j+1][2] && data[j][3] == data[j+1][3] && data[j][1] == data[j+1][1]) {

				int temp = data[j][3];
				data[j][3] = data[j+1][3];
				data[j+1][3] = temp;

				temp = data[j][2];
				data[j][2] = data[j+1][2];
				data[j+1][2] = temp;

				temp = data[j][1];
				data[j][1] = data[j+1][1];
				data[j+1][1] = temp;
			}
		}
	}

	int flag = 0;

	for (i = 0; i < 100 - 1; i++) {

		if(data[i][1] != 0) {

			if(data[i][3] == data[i+1][3]) {

				printf("%d %d %d\n", data[i][1], data[i][2], data[i][3]);
				flag = 1;
			}

			else if(flag == 1) {

				printf("%d %d %d\n", data[i][1], data[i][2], data[i][3]);
				flag = 0;
			}
		}
	}

	return 0;
}

//==========================================================================