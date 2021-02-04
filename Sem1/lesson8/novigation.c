#include <stdio.h>
#include "novigation.h"
#include "cText.h"

//-------------------------------

void danger_signal (int N, int *danger );

//-------------------------------

int main(){

	int N = 0;

	struct position ships[50];

	struct fig triangle;

	struct position port;

	float slopes[50][4];

	int danger[50];

	$lb
	printf("Hello, it is new novigation system!\n >>> Enter the number of ships: \n");
	scanf("%d", &N);
	$d

	$lb
	printf(">>> Start entering a coordinates of ships:\n");
	input_ship (N, ships);
	$d

	$lb
	printf(">>> Start entering a coordinates of tiangle:\n");
	triangle = input_triangle ();
	$d

	$lb
	printf(">>> Start entering a coordinates of port:\n");
	port = input_port ();
	$d

	matrix_of_slopes (N, ships, triangle, port, slopes);

	danger_identification (N, slopes, danger);

	danger_signal (N, danger);

  return 0;
}

//-------------------------------------

void danger_signal (int N, int *danger ){

	int i = 0;
	for(i = 0; i < N; i++){

		if(danger[i] == 1){

			$r
			printf("YES\n");
			$d
		}
		
		else{

			$g
			printf("NO\n");
			$d
		}
	}

  return;
}
