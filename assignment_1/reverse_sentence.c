#include <stdio.h>
#include <string.h>

//Program to reverse sentence
int main( ){
	int i = 0;
	char entered_sentence[1000];
	
	printf("Enter the sentence: ");
	fgets(entered_sentence,1000,stdin);
	
	int length_of_sentence = strlen(entered_sentence);
	int length_of_sentence_in_array = length_of_sentence - 1;
	
	printf("***The Entered Sentence ***\n");
	printf("%s \n", entered_sentence);
	printf("***Reversed Sentence***");
	
	for(int number = length_of_sentence_in_array; number >= i ; number--){
		printf("%c", entered_sentence[number]); 		
	}	

	return 0;
}
