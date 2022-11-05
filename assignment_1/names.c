#include <stdio.h>
#include <string.h>

//Program to get the names of 10 students
int main( ){
	int number_of_student = 10;
	char names_of_student[number_of_student][45];

	for(int i = 1; i <= number_of_student ; i++){
		char individual_name[45];
		printf("\n Student %d enter your name: ", i);
		fgets(individual_name, 45, stdin);
		strcpy(names_of_student[i], individual_name);
	
	}
	
	printf("\n Below are the names of 10 student \n");
	for(int j = 1; j <= number_of_student ; j++){
		printf("\n \tStudent %d name: %s \n", j,names_of_student[j]); 
	}

	return 0;
}