#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//-------------------------

struct stud{

	char surname[100];

	int ball[5];

};

//-------------------------

int cmp(const void* s1, const void* s2);

//-------------------------

int main(){

  struct stud group[3] = {{"aaIvanov", {4, 4, 10, 8,  3}},
														 {"abIvanov", {6, 7,  8, 9, 10}},
														 {"baIvanov", {7, 8,  4, 8, 10}}};

	qsort(group, 3, sizeof(*group), cmp);

	int i = 0;
	for(i = 0; i < 3; i++){

		printf("%s \n", group[i].surname);
	}

	return 0;
}

//------------------------

int cmp(const void* s1, const void* s2){

	return strcmp(((struct stud*)s1)->surname, ((struct stud*)s2)->surname);
}
