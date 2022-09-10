#include <stdio.h>

/**
 * main : main block reurns the value 0
 * description : an algorithm to print the size of 
 * various types on the computer it is compiled and run on
 */

int main(void) /* main block returns the value 0 */
{
	int intType;
	float floatType;
	char charType;
	double doubleType;

/* sizeof evaluates the value of a variable */
	printf("The size of integer : %zu bytes\n", sizeof(intType));
	printf("The size of float : %zu bytes\n", sizeof(floatType));
	printf("The size of character : %zu bytes\n", sizeof(charType));
	printf("The size of double : %zu bytes\n", sizeof(doubleType));
}
