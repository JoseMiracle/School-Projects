/* Program to check the number of times adams walk*/

#include <stdio.h>
#include <string.h>

int max_length = 100;
//This is too know the number of cases
int numberOfCases(){
	FILE *fp;
	fp =  fopen("adams.txt", "r");
	
	char each_case[100];
	int number_of_cases = 0;
	while( fscanf(fp, "%s",each_case) != EOF ){
		number_of_cases++;
		}
	return number_of_cases - 1;
}

//This is to get the number of steps
int noOfSteps( char test_case[]){
	int steps = 0;
	for(int n = 0 ; n <=strlen(test_case) ; n++){
	
		if( test_case[n] == 'U' ){
			steps++;
		}
		
		else{
			break;
		}
	}

	return steps;
}


int checkCase(char test_case[]){
	int count = 0;
	int exact_length = strlen(test_case);
	//printf("%d", exact_length);
	
	

if ((test_case[0] == 'U')  || (test_case[0] == 'D')){
	int i = 0;
	while((test_case[i] == 'U') || (test_case[i] == 'D')){
		count++;
		i++;	
}
	if(count == exact_length){
		return 0;
	}
	else if(count < exact_length){
		return 1;
	}

}
else if((test_case[0] != 'U')  || (test_case[0] != 'D')){
	return 1;
}
}


int main( ){
	char test_cases[numberOfCases()][max_length];
	
	FILE *fp;
	fp =  fopen("adams.txt", "r");
	printf("The number of test cases is %d \n", numberOfCases());
	//The loop below is used in fetching snd string the data from the file
	
	//This checks if file doesn't exist
	if(fp == NULL){
		printf("FIle is empty");
	}
	
	else{
		int i = 0;
		char each_case[1000];
		while( fscanf(fp, "%s",each_case) != EOF ){
			if(strlen(each_case) > 100){
				printf("\n\t%s: This test case is to long, pls check or edit the file\n\n", each_case);
				continue;
			}
		else{
			strcpy(test_cases[i], each_case);
		
		}
		i++;
		}
	}
	
	
	for(int i = 1; i <=sizeof(test_cases)/sizeof(test_cases[0]); i++ ){
		char test_case[max_length];
		strcpy(test_case, test_cases[i]);
		
		
		//printf("\t %s %d\n", test_case,checkCase(test_case));
	
		int returned_value = checkCase(test_case);
		//This checks if a test case contains wrong letters
		if( returned_value == 1){
			
			printf("\t%s : This test case contains wrong character(s), pls edit it.\n", test_case);
			 
		}
		
		//This checks if a test case contains right letters
		else if(returned_value == 0){
			printf("\t%s :\tAdams will work '%d times' \n\n",test_case ,noOfSteps(test_case));
		}

		
	}
	
			
return 0;
}
