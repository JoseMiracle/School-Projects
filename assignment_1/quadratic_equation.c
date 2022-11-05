//Program for quadractic equation
#include <stdio.h>
#include <math.h>


//This is for getting and returning the discriminant
int discriminant(int first_coefficient, int second_coefficient, int constant){
	int value = pow(second_coefficient,2) -  (4 * first_coefficient * constant);
	return value;
}

int main( ){
	int first_coefficient;
	int second_coefficient;
	int constant;

	printf("\n***THIS PROGRAM IS FOR GETTING THE ROOTS OF QUADRATIC EQUATION***.\n\n ");
	printf("\t\t ax^2 + bx + c \n\n");
	
	//This is for getting & storing the first_coefficient	
	printf("Enter the first digit coefficient or value of a: ");
	scanf("%d", &first_coefficient);

	//This is for getting and storing the second_coefficient
	printf("Enter the second digit coefficient or value of b: ");
	scanf("%d", &second_coefficient);

	//This is for getting and storing the constant
	printf("Enter the digit constantor value of c: ");
	scanf("%d", &constant);
	
	int returned_value = discriminant(first_coefficient, second_coefficient, constant);

	if(returned_value >= 0){	
	

		double first_root =   -((double)(second_coefficient + sqrt(returned_value))) / ( (double) (2 * first_coefficient) );
		double second_root =  -((double)(second_coefficient - sqrt(returned_value))) / ( (double) (2 * first_coefficient) );
		

		printf("\n The First Root Is: %.2lf", first_root);
		printf("\n The Second Root Is: %.2lf ", second_root);
	}
	
	else if(returned_value < 0){
		
		if( second_coefficient > 0){
		printf("i,is the imaginary number: sqrt(-1) \n");		
		
		printf("%d", returned_value);
		printf("\n The First Root Is: ( %d - %.2lfi )/ %d", -(second_coefficient), (double) sqrt(abs(returned_value)), 2*first_coefficient); 				
		printf("\n The Second Root Is: ( %d + %.2lfi )/%d", -(second_coefficient), (double)  (sqrt(abs(returned_value))),  2*first_coefficient);
		}
		
		else if ( second_coefficient < 0){
		printf("i,is the imaginary number: sqrt(-1) \n");
		printf("\n The First Root Is: ( %d + %.2lfi ) /%d", -(second_coefficient), (double) sqrt(abs(returned_value)), 2*first_coefficient); 				
		printf("\n The Second Root Is: ( %d - %.2lfi ) /%d", -(second_coefficient), (double) (sqrt(abs(returned_value))),  2*first_coefficient);
		}

}
	
	return 0;	
}