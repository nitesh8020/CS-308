/* This program computes the square root of a
positive number. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<ctype.h>
#include<string.h>

// The main function definition below.
int main(int argc, char* argv[]) {
	
	// Checks if none or more than one arguments are provided at run time of executable.
	if (argc != 2) {
		printf("DEBUG: Usage: sqrt input\n\n");
		exit(-1);
	}

	// Checking if input is a valid number.
	int size=strlen(argv[1]);
	if(size==1 && argv[1][0]=='-'){        // if input is minus sign.
		printf("DEBUG: Invalid Input. \n");
		exit(-1);
	}
	else if(size==1 && !isdigit(argv[1][0])){
		printf("DEBUG: Invalid Input. \n");
		exit(-1);	
	}
	else {
		for(int i=1;i<size;i++){
			if(!isdigit(argv[1][i])){
				printf("DEBUG: Invalid Input. \n");
				exit(-1);
			}
		}
	}

	// atoi functions convert character to integer.
	int input = atoi(argv[1]);
	
	// Checking if input is negative.
	if(input<0) {
		printf("DEBUG: Sqrt of %d is %fi \n",input,sqrt(-1*input));
	}
	else {
		printf("DEBUG: Sqrt of %d is %f\n",input,sqrt(input));
	}

	printf("DEBUG: End of program. Exiting. \n");
	return(0);

} 
// end main
