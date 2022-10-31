#include <stdio.h>
#include <string.h>

//Program to reverse sentence
int main( ){
	char sentence[1000];
	
	printf("Enter the sentence: ");
	fgets(sentence,1000,stdin);
	
	char reversed_sentence[1000];
	strcpy(reversed_sentence, strrev(sentence));	
	printf("%s", reversed_sentence);	
	
	return 0;
}
