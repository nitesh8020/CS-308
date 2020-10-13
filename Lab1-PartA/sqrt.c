/* This program computes the square root of a
positive number. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// The main function definition below.
int main(int argc, char* argv[]) {
	
	// Checks if none or more than one arguments are provided at run time of executable.
	if (argc != 2) {
		printf("Usage: sqrt input\n\n");
		exit(-1);
	}

	// atoi functions convert character to integer.
	int input = atoi(argv[1]);
	printf("Sqrt of %d is %f\n",input,sqrt(input));
	printf("End of program. Exiting. \n");
	return(0);

} 
// end main
