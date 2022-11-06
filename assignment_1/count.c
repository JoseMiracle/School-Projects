#include <stdio.h>

//Program to count 1-N

void numbers(int i, int starting_number, int entered_number){
	if(i == starting_number){
		printf("\nStarting number: %d\n", starting_number);

	}
			
	else if( i == entered_number){
		printf("Entered_number: %d\n", entered_number);			
	}
			
	else{
		printf("\t\t %d \n", i);
	}
}

int main ( ){
	printf("*** WELCOME TO COUNT PROGRAM *** \n\n");
	

	int starting_number = 1;	
	int entered_number;
	
	printf("Your starting number is: 1 \n");
	printf("Enter a number to count to from the starting number:");
	scanf("%d", &entered_number);
	
	
	if(entered_number < starting_number){
		for(int i = starting_number; i >= entered_number; i--){
			
			numbers(i, starting_number, entered_number);	
		}					
	}
	
	else if(entered_number >= starting_number){
		for(int i = starting_number; i <= entered_number; i++){
			numbers(i, starting_number, entered_number);
		}
	}
	
	return 0;
}  
