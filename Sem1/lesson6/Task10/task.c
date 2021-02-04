#include <stdio.h>
#include <stdlib.h>

//----------------------------------

struct student{

	char* name;
	char* surname;

	char* group;

	int birthY;

	int ball[5];
};

//----------------------------------

void EnterData(struct student group[]);

//----------------------------------

int main(){

  struct student group[3] = {{"Ivan" , "Ivanov" , "B01-003", 2000, {10, 8, 8, 9, 10}},
														 {"Peter", "Petrov" , "B01-003", 2001, {10, 3, 8, 9, 10}}};

	group[2].name    = (char*) calloc(100, sizeof(char));
	
	group[2].surname = (char*) calloc(100, sizeof(char));

	group[2].group = (char*) calloc(7 + 1, sizeof(char));
 
  EnterData(group);

	int i = 0, j = 0, flag = 0;
	for(i = 0; i < 3; i++){

		for(j = 0; j < 5; j++){

			if(group[i].ball[j] < 8)
				flag = 1;
		}

		if(flag == 0){

			printf("%s %s - honours pupil\n", group[i].name, group[i].surname);
		}

		flag = 0;
	}

	for(i = 0; i < 3; i++){

		for(j = i + 1; j < 3; j++){

			if(group[i].birthY == group[j].birthY){

				printf("%s %s and %s %s have same year of birth (%d)\n", group[i].name, group[i].surname, \
				                                                         group[j].name, group[j].surname, \
																																 group[i].birthY);
			}
		}
	}

  return 0;
}

//-----------------------------------

void EnterData(struct student group[]){

	printf("Enter the name of 3rd student: \n");
	scanf("%s", group[2].name);

  printf("Enter the surname: \n");
	scanf("%s", group[2].surname);

  printf("Enter the group: \n");
	scanf("%s", group[2].group);

	printf("Enter the year of birth: \n");
	scanf("%d", &group[2].birthY);

	printf("Enter the balls of 3rd student: \n");
	scanf("%d %d %d %d %d", &group[2].ball[0], \
													&group[2].ball[1], \
													&group[2].ball[2], \
													&group[2].ball[3], \
													&group[2].ball[4]);

  return;
}
