#include <stdio.h>
#include "novigation.h"

struct fig input_triangle ()
{
  struct coordinates lat1;
	struct coordinates lon1;
	struct coordinates lat2;
	struct coordinates lon2;
	struct coordinates lat3;
	struct coordinates lon3;

  int i = 0;

for(;;){
	scanf ("%d %d %d", &lat1.degree, &lat1.minutes, &lat1.seconds); 
	scanf ("%d %d %d", &lon1.degree, &lon1.minutes, &lon1.seconds); 
	struct position apex1 = {lat1, lon1};
	
	scanf ("%d %d %d", &lat2.degree, &lat2.minutes, &lat2.seconds); 
	scanf ("%d %d %d", &lon2.degree, &lon2.minutes, &lon2.seconds); 
	struct position apex2 = {lat2, lon2};
	  
	scanf ("%d %d %d", &lat3.degree, &lat3.minutes, &lat3.seconds); 
	scanf ("%d %d %d", &lon3.degree, &lon3.minutes, &lon3.seconds); 
	struct position apex3 = {lat3, lon3};

	break
}
	struct fig tri = {apex1, apex2, apex3};

	return tri;
}

